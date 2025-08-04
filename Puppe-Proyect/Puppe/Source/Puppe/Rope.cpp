// Fill out your copyright notice in the Description page of Project Settings.


#include "Rope.h"

#include "BlueprintEditor.h"
#include "InputActionValue.h"
#include "MaterialHLSLTree.h"
#include "MovieSceneTracksComponentTypes.h"
#include "Animation/AnimPhysicsSolver.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameSession.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARope::ARope()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create Default Scene Root
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;
	
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetupAttachment(RootComponent);

	RopeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RopeRoot"));
	RootComponent = RopeRoot;
	
	RopeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RopeMesh"));
	RopeMesh->SetupAttachment(RopeRoot);

	AttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
	AttachPoint->SetupAttachment(RopeRoot);
	
}

// Called when the game starts or when spawned
void ARope::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	DisableInput(PlayerController);
	
	RopeMesh->SetSimulatePhysics(false);
	
	RopeMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	AttachPoint->SetRelativeLocation(FVector(0, 0, -RopeDistance));
}

// Called every frame
void ARope::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RopeSwing(DeltaTime);
	RopeClimb();
	DrawBonesLocations(true);
}

void ARope::AttachActor()
{
	if (PlayerCharacter != nullptr)
	{
		EnableInput(PlayerController);

		PlayerCharacter->GetMesh()->SetSimulatePhysics(false);
		
		// Find the closest bone
		FName ClosestBone = FindClosestBoneToPlayer(PlayerCharacter);

		// Save the RopePivot
		RopePivotLocation = RopeMesh->GetBoneLocation(ClosestBone);

		// Get player location
		FVector PlayerLocation = PlayerCharacter->GetActorLocation();

		// Calculate the offset to allying the player to the rope.
		FVector DeltaOffset = RopePivotLocation - PlayerLocation;
		PlayerCharacter->SetActorLocation(DeltaOffset);

		// Disable Player Movement
		PlayerCharacter->GetCharacterMovement()->DisableMovement();

		// To avoid collision issues while climbing deactivate the collisions
		PlayerCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
		//PlayerCharacter->GetCharacterMovement()->GravityScale = 0.0f;
		PlayerCharacter->AttachToComponent(AttachPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		
		// Save Swing State
		isSwinging = true;

		UE_LOG(LogTemp, Display, TEXT("Attached manually to rope!"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NOt Attached!!"));
	}
	
}

void ARope::DettachPlayer()
{
	if (PlayerCharacter != nullptr)
	{
		// Reactivate Player Movement
		PlayerCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Falling);

		// Restore Collision
		PlayerCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		DisableInput(PlayerController);
		isSwinging = false;

		UE_LOG(LogTemp, Display, TEXT("Detached from rope!"));
	}
}

void ARope::ShakeRopeOnAttachment()
{
	UCharacterMovementComponent* charMovComp = PlayerCharacter->GetCharacterMovement();
	FVector ImpulseVelocity = charMovComp->GetLastUpdateVelocity() * 22.0f;
	RopeMesh->AddImpulse(ImpulseVelocity,FName("Bone_084"));
}

FVector ARope::GetLaunchVelocity() const
{
	float forwardUnits = 1000.0f;
	float upUnits = 100.0f;
	float ForwardInput = GetMoveInput().X * forwardUnits;
	FVector SetUpUnits = PlayerCharacter->GetActorUpVector() * upUnits;
	FVector LaunchVelocity = FVector(0,ForwardInput,0) + SetUpUnits;
	UE_LOG(LogTemp, Warning, TEXT("Forward Vector: %s"), *LaunchVelocity.ToString());
	return LaunchVelocity;
}

FVector2D ARope::GetMoveInput() const
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

float ARope::GetMinMaxComponentBound(UPrimitiveComponent* Component, FString BoundNeeded) const
{
	FVector BoxOrigin,BoxExtent;
	float Radius;
	UKismetSystemLibrary::GetComponentBounds(Component,BoxOrigin,BoxExtent, Radius);
	FVector Min = BoxOrigin - BoxExtent;
	FVector Max = BoxOrigin + BoxExtent;
	float BoundValue;
	if (BoundNeeded == TEXT("Min")) BoundValue = Min.Z;
	else if (BoundNeeded == TEXT("Max")) BoundValue = Max.Z;
	return BoundValue;
}

void ARope::RopeSwing(float DeltaTime)
{
	if (!isSwinging) return;

	float InputX = GetMoveInput().X;

	Currentangle += InputX * SwingSpeed * DeltaTime;

	Currentangle = FMath::Clamp(Currentangle, -MaxSwingAngle, MaxSwingAngle);

	float Radians = FMath::DegreesToRadians(Currentangle);

	FVector NewOffset = FVector(
		0,
		FMath::Sin(Radians) * RopeDistance
		,-FMath::Cos(Radians) * RopeDistance
		);

	FVector NewLocation = RopePivotLocation + NewOffset;
	PlayerCharacter->SetActorLocation(NewLocation);

	FRotator RopeVisualRotation = FRotator(0, 0, Currentangle);
	RopeRoot->SetRelativeRotation(RopeVisualRotation);
}

void ARope::RopeClimb()
{
	if (!isSwinging) return;

	InputY = GetMoveInput().Y;

	//Don't move if we don't have any Y Input
	if (FMath::IsNearlyZero(InputY)) return;

	//Get actual position
	float PlayerPosZ = PlayerCharacter->GetActorLocation().Z;
	float MinZ = GetMinMaxComponentBound(BoxComp, FString("Min"));
	float MaxZ = GetMinMaxComponentBound(BoxComp, FString("Max"));
	
	//Deltatime Movement
	float DeltaZ = InputY * ClimbSpeed * GetWorld()->GetDeltaSeconds();

	//New Position
	float NewZ = PlayerPosZ + DeltaZ;

	//Calculate Limits

	if (NewZ >= MinZ && NewZ <= MaxZ)
	{
		PlayerCharacter->AddActorWorldOffset(FVector(0.0f, 0.0f, DeltaZ), true);
	}
	
}

void ARope::DrawBonesLocations(bool Condition)
{
	TArray<FName> BoneNames = {
		"Bone_001", "Bone_002", "Bone_003", "Bone_004", "Bone_005",
		"Bone_006", "Bone_007", "Bone_008", "Bone_009", "Bone_010",
		"Bone_011", "Bone_012", "Bone_013", "Bone_014", "Bone_015",
		"Bone_016", "Bone_017", "Bone_018", "Bone_019", "Bone_020",
		"Bone_021", "Bone_022", "Bone_023", "Bone_024", "Bone_025",
		"Bone_026", "Bone_027", "Bone_028", "Bone_029", "Bone_030",
		"Bone_031", "Bone_032", "Bone_033"
	};
	
	if (Condition)
	{
		for (FName Bone : BoneNames)
		{
			FVector BoneLocation = RopeMesh->GetSocketLocation(Bone);

			DrawDebugString(
				GetWorld(),
				BoneLocation,
				Bone.ToString(),
				nullptr,
				FColor::White,
				0.0f,
				true
			);
		}
	}
}

FName ARope::FindClosestBoneToPlayer(ACharacter* Character)
{
	
	FName ClosestBoneName = NAME_None;
	float  ClosestBoneDistance = FLT_MAX;

	//Getting all the bones from the Rope
	TArray<FName> BoneNames;
	RopeMesh->GetBoneNames(BoneNames);

	FVector PlayerLocation = Character->GetActorLocation();

	for (FName Bone : BoneNames)
	{
		FVector BoneLocation = RopeMesh->GetSocketLocation(Bone);

		float Distance = FVector::Dist(PlayerLocation, BoneLocation);
		if (Distance < ClosestBoneDistance)
		{
			ClosestBoneDistance = Distance;
			ClosestBoneName = Bone;
		}
	}
	return ClosestBoneName;
}
