// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Kismet/GameplayStatics.h"
#include "PuppeCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class APuppeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
public:
	APuppeCharacter();
	
	UPROPERTY(BlueprintReadWrite)
	bool IsPushing = false;

	void CallAxisMovementFunction(FVector2D MovementInput);

	void StopWhenButtonIsReleased();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	/* Called for jumping*/
	void PlayerJump();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintCallable)
	void SetIsOnLadder(bool IsOnladder);

	UFUNCTION(BlueprintCallable)
	void SetIsOnRope (bool IsOnRope);

	UFUNCTION(BlueprintCallable)
	void CharacterDead();

	bool IsPlayerDead = false;

	UPROPERTY(BlueprintReadOnly)
	bool bIsWalkingOnBeam = false;

	UPROPERTY(BlueprintReadOnly)
	bool bIsOnRope;

private:
	bool bIsOnLadder;
	UCharacterMovementComponent* MyCharacterMovement;

	UPROPERTY(EditAnywhere)
	float MaxFallingDeadVel;

	void CaspsuleBeamTraceWold();
	bool bCanWalkOnBeam = true;
	
	//Save the rotation rate
	FRotator MyRoratorRate;
	
	UPROPERTY(EditAnywhere)
	float MaxBalanceVelocity;
	UPROPERTY(EditAnywhere)
	float MaxBalanceRotationZRate;

	void VerifyIfAMontageIsPlaying();
};



