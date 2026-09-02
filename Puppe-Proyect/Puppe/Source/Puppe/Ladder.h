// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Actor.h"
#include "Ladder.generated.h"

UCLASS()
class PUPPE_API ALadder : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ALadder();

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "LadderTransform", meta = (MakeEditWidget = "true"))
	TArray<FTransform> LadderTransform;

	UPROPERTY(EditDefaultsOnly, Category= "Animations Montages")
	TArray<UAnimMontage*> Montages;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float ForcedInputY = 0.f;
	bool bUseForcedInput = false;

	UFUNCTION(BlueprintCallable)
	void SetPlayerCharacter(ACharacter* Player);
	UFUNCTION(BlueprintCallable)
	void SetOnLadder();
	UFUNCTION(BlueprintCallable)
	void SetOffLadder();
	UFUNCTION(BlueprintCallable)
	void CheckArrayLenght();
	UFUNCTION(BlueprintCallable)	
	bool CheckIfAMontageIsPlaying();

	UPROPERTY(BlueprintReadWrite)
	bool bIsNearLadder = false;
	UPROPERTY(BlueprintReadOnly)
	bool bIsOnLadder = false;
	UPROPERTY(BlueprintReadOnly)
	float InputY;

	void PlayerReachsLadderTop();


	void LadderClimb();
	
private:
	ACharacter* MyCharacter;
	APlayerController* PlayerController;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;
	FTransform LadderTransformBottom;
	FTransform LadderTransformTop;
	
	void PlayerFaceLadder();

	int FindClosestLadderTransform() const;
	FVector2D GetInputVector() const;
	FTransform CalculateFinalTransform(FTransform& Transform) const;
	FVector GetLaunchVelocity()const;
	void OnCompletedMontage(UAnimMontage* Montage, bool bInterrupted);
	void PlayPlayerONLadderMontages(int MontageIndex);
};
