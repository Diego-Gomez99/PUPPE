// Fill out your copyright notice in the Description page of Project Settings.


#include "Ladder.h"

#include "MovieSceneTracksComponentTypes.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet2/BlueprintEditorUtils.h"

// Sets default values
ALadder::ALadder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALadder::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	DisableInput(PlayerController);
}

// Called every frame
void ALadder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LadderClimb();
}

void ALadder::SetPlayerCharacter(ACharacter* Player)
{
	MyCharacter = Player;
}

void ALadder::SetOnLadder()
{
	if (bIsNearLadder)
	{
		UCharacterMovementComponent* CharMov = MyCharacter->GetCharacterMovement();
		CharMov->SetMovementMode(MOVE_None);
		LadderTransformBottom = CalculateFinalTransform(LadderTransform[0]);
		LadderTransformTop = CalculateFinalTransform(LadderTransform[1]);
		PlayerFaceLadder();
		EnableInput(PlayerController);
		bIsOnLadder = true;
	}
}

void ALadder::SetOffLadder()
{
	if (bIsOnLadder)
	{
		UCharacterMovementComponent* CharMov = MyCharacter->GetCharacterMovement();
		CharMov->SetMovementMode(MOVE_Walking);
		//MyCharacter->LaunchCharacter(GetLaunchVelocity(), false, false);
		DisableInput(PlayerController);
		bIsOnLadder = false;
	}
}

void ALadder::CheckArrayLenght()
{
	float LadderLength = LadderTransform.Num();
	UE_LOG(LogTemp, Display, TEXT("%f"), LadderLength);
}

void ALadder::PlayerFaceLadder()
{
	int ClosestIndex = FindClosestLadderTransform();
	FTransform NearTransform = LadderTransform[ClosestIndex];
	PlayPlayerONLadderMontages(ClosestIndex);
	//if (ClosestIndex == 0)
	MyCharacter->SetActorTransform(CalculateFinalTransform(NearTransform), false,  nullptr, ETeleportType::None);
}

void ALadder::LadderClimb()
{
	if (bIsOnLadder && !CheckIfAMontageIsPlaying())
	{
		float PlayerZ = MyCharacter->GetActorLocation().Z;
		FVector WorldLocation = LadderTransformBottom.GetLocation();
		FVector WorldTopLadder = LadderTransformTop.GetLocation();
		float TopLadder = WorldTopLadder.Z;
		float MinLadder = WorldLocation.Z;
		float PlayerCapsuleHeight = MyCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		float CapsuleTop = PlayerCapsuleHeight + MyCharacter->GetCapsuleComponent()->GetComponentLocation().Z;

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("%f"), CapsuleTop));
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("%f"), TopLadder));
		
		if (PlayerZ < MinLadder)
		{
			SetOffLadder();
			
		}
		else if (CapsuleTop >= TopLadder)
		{
			PlayerReachsLadderTop();
			DrawDebugSphere(GetWorld(), WorldTopLadder, 10.0f, 12, FColor::Blue, false, 5.0f);
		}
		else
		{
			//UE_LOG(LogTemp, Error, TEXT("Se Paso"));
			//InputY = GetInputVector().Y;
			if (bUseForcedInput)
			{
				InputY = ForcedInputY;
			}
			else
			{
				InputY = GetInputVector().Y;
			}
			MyCharacter->AddActorWorldOffset(FVector(0,0,InputY));
		}
	}
}

int ALadder::FindClosestLadderTransform() const
{
	int ClosestIndex = -1;
	float ClosestDistance = 0.0;
	for (int32 i = 0; i < LadderTransform.Num(); i++)
	{
		int CurrentIndex = i;
		FVector LadderPointsLocation = LadderTransform[i].GetLocation();
		FVector WorldLocation = GetActorTransform().TransformPosition(LadderPointsLocation);
		float CurrentDistSQ = FVector::DistSquared(WorldLocation, MyCharacter->GetActorLocation());

		if (CurrentDistSQ < ClosestDistance || ClosestIndex < 0)
		{
			ClosestIndex = CurrentIndex;
			ClosestDistance = CurrentDistSQ;
		}
	}
	
	return ClosestIndex;
}

FVector2D ALadder::GetInputVector() const
{
	if (MoveAction)
	{
		UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent);
		FEnhancedInputActionValueBinding MoveActionBinding = EnhancedInputComponent->BindActionValue(MoveAction);
		FVector2D MoveInput = MoveActionBinding.GetValue().Get<FVector2D>();
		return MoveInput.GetSafeNormal();
	}
	return FVector2D::ZeroVector;
}

FTransform ALadder::CalculateFinalTransform(FTransform& Transform) const
{
	FTransform CharacterTransform = MyCharacter->GetTransform();
	FTransform ComposeTransform = Transform * GetTransform();
	float CapsuleScaled = MyCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	//FVector FinalLocation = ComposeTransform.GetLocation();
	FVector FinalLocation = ComposeTransform.GetLocation() + FVector(0, 0, CapsuleScaled);
	//UE_LOG(LogTemp, Warning, TEXT("FinalLocation: %s"), *FinalLocation.ToString());
	//DrawDebugBox(GetWorld(), FinalLocation, FVector(10), FColor::Red, false, 5.0f);
	FTransform FinalTransform = FTransform(ComposeTransform.GetRotation(),FinalLocation,CharacterTransform.GetScale3D());
	return FinalTransform;
}

FVector ALadder::GetLaunchVelocity() const
{
	float ForwardUnits = 300;
	float UpUnits = 300;
	FVector LaunchDirection = MyCharacter->GetActorForwardVector();
	FVector ForwardForce = LaunchDirection * ForwardUnits;
	FVector UPForce = MyCharacter->GetActorUpVector() * UpUnits;
	FVector LaunchVelocity = ForwardForce + UPForce;
	return LaunchVelocity;
}

void ALadder::PlayerReachsLadderTop()
{
	UAnimInstance* AnimInstance = MyCharacter->GetMesh()->GetAnimInstance();
	MyCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	AnimInstance->Montage_Play(Montages[1]);
	FOnMontageEnded Ended;
	Ended.BindUObject(this, &ALadder::OnCompletedMontage);
	AnimInstance->Montage_SetEndDelegate(Ended);
}

void ALadder::OnCompletedMontage(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted && !bIsOnLadder)
	{
		SetOffLadder();
	}

}

void ALadder::PlayPlayerONLadderMontages(int MontageIndex)
{
	UAnimInstance* AnimInstance = MyCharacter->GetMesh()->GetAnimInstance();
	AnimInstance->Montage_Play(Montages[MontageIndex]);
	if (MontageIndex != 0) MyCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	DrawDebugSphere(GetWorld(), MyCharacter->GetActorLocation(), 10.0f, 12, FColor::Red, false, 2.0f);
	FOnMontageEnded Ended;
	Ended.BindUObject(this, &ALadder::OnCompletedMontage);
	AnimInstance->Montage_SetEndDelegate(Ended);
}

bool ALadder::CheckIfAMontageIsPlaying()
{
	bool bIsPlayingMontage = false;
	UAnimInstance* AnimInstance = MyCharacter->GetMesh()->GetAnimInstance();
	if (AnimInstance && AnimInstance->IsAnyMontagePlaying())
	{
		bIsPlayingMontage = true;
	}
	return bIsPlayingMontage;
}
