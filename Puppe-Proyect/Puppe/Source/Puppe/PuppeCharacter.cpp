// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuppeCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// APuppeCharacter

APuppeCharacter::APuppeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void APuppeCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	MyCharacterMovement = GetCharacterMovement();
	MyRoratorRate = MyCharacterMovement->RotationRate;
}

void APuppeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float VectorLength = GetCharacterMovement()->Velocity.Size();
	if (MyCharacterMovement->IsFalling() && VectorLength > MaxFallingDeadVel && !IsPlayerDead)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("%s"), TEXT("Dead!!")));
		CharacterDead();
	}

	if (bCanWalkOnBeam) CaspsuleBeamTraceWold();

	/*If a montage is playing the inputs will be disabled*/
	VerifyIfAMontageIsPlaying();
}

void APuppeCharacter::SetIsOnLadder(bool IsOnladder)
{
	bIsOnLadder = IsOnladder;
}

void APuppeCharacter::SetIsOnRope(bool IsOnRope)
{
	bIsOnRope = IsOnRope;
}

void APuppeCharacter::CharacterDead()
{
	GetMesh()->SetSimulatePhysics(true);
	UCapsuleComponent* MyCapsuleComponent =  GetCapsuleComponent();
	FVector NewLocation = FMath::VInterpTo(MyCapsuleComponent->GetComponentLocation(), GetMesh()->GetComponentLocation(), 1.0f, 3.0f);
	FRotator NewRotation = FMath::RInterpTo(MyCapsuleComponent->GetComponentRotation(), GetMesh()->GetComponentRotation(), 1.0f, 3.0f);
	
	MyCapsuleComponent->SetWorldLocationAndRotation(NewLocation, NewRotation);
	MyCharacterMovement->MaxWalkSpeed = 0;
	IsPlayerDead = true;
}

//////////////////////////////////////////////////////////////////////////
// Input

void APuppeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &APuppeCharacter::PlayerJump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APuppeCharacter::Move);

		//Stop Pushing When button is released
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &APuppeCharacter::StopWhenButtonIsReleased);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APuppeCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void APuppeCharacter::CallAxisMovementFunction(FVector2D MovementInput)
{
	UFunction* BPFunction = FindFunction(FName("Return Axis Movement"));

	if (BPFunction)
	{
		struct FunctionParams
		{
			FVector2D movement;
		};

		FunctionParams Params;
		Params.movement = MovementInput;

		ProcessEvent(BPFunction, &Params);
	}
}

void APuppeCharacter::StopWhenButtonIsReleased()
{
	FVector2D ResetValues;
	CallAxisMovementFunction(ResetValues.Zero());
}

void APuppeCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		if (!IsPushing)
		{
			if (!bIsOnLadder)
			{
				// add movement 
				AddMovementInput(ForwardDirection, MovementVector.Y);
				AddMovementInput(RightDirection, MovementVector.X);
			}
		}
		else
		{
			CallAxisMovementFunction(MovementVector.GetSafeNormal());
		}
	}
	
}

void APuppeCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
	//	AddControllerYawInput(LookAxisVector.X);
	//	AddControllerPitchInput(LookAxisVector.Y);
	}
}

void APuppeCharacter::PlayerJump()
{
	if(!IsPushing)
	{
		ACharacter::Jump();
	}
}

void APuppeCharacter::CaspsuleBeamTraceWold()
{
	FVector StartLocation = GetMesh()->GetSocketLocation(FName(""));
	FVector EndLocation = StartLocation + GetActorForwardVector() * 50.0f;
	float CapsuleRadius = 7.0f;
	float CapsuleHeight = 33.0f;

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel3));

	TArray<AActor*> ActorsToignore;
	ActorsToignore.Add(this);

	//Out Hit Result
	FHitResult OutHit;

	bool HitResult = UKismetSystemLibrary::CapsuleTraceSingleForObjects(
		GetWorld(),
		StartLocation,
		StartLocation,
		CapsuleRadius,
		CapsuleHeight,
		ObjectTypes,
		false,
		ActorsToignore,
		EDrawDebugTrace::ForOneFrame,
		OutHit,
		true,
		FLinearColor::White,
		FLinearColor::Blue,
		5.0f
	);

	if (HitResult)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *OutHit.GetActor()->GetName());
		bIsWalkingOnBeam = true;
		MyCharacterMovement->MaxWalkSpeed = MaxBalanceVelocity;
		MyCharacterMovement->RotationRate = FRotator(0, MaxBalanceRotationZRate, 0);
	}
	else
	{
		bIsWalkingOnBeam = false;
		MyCharacterMovement->MaxWalkSpeed = 600.0f;
		MyCharacterMovement->RotationRate = MyRoratorRate;
	}
}




void APuppeCharacter::VerifyIfAMontageIsPlaying()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && AnimInstance->IsAnyMontagePlaying())
	{
		this->DisableInput(PlayerController);
	}
	else
	{
		this->EnableInput(PlayerController);
	}
}
