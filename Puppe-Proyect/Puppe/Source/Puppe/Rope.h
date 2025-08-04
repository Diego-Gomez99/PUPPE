// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "EnhancedInputComponent.h"
#include "Rope.generated.h"

UCLASS()
class PUPPE_API ARope : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARope();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* RopeMesh;

	UPROPERTY(EditAnywhere)
	float ClimbSpeed;

	UPROPERTY(EditAnywhere)
	float SwingForce;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AttachActor();
	UFUNCTION(BlueprintCallable)
	void DettachPlayer();

	UFUNCTION(BlueprintCallable)
	void ShakeRopeOnAttachment();
	
	UPROPERTY(BlueprintReadOnly)
	float InputY;

private:
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;
	UCableComponent* CableComponent;
	APlayerController* PlayerController;
	ACharacter* PlayerCharacter;
	bool isSwinging = false;	
	FVector GetLaunchVelocity() const;
	FVector2D GetMoveInput() const;
	float GetMinMaxComponentBound(UPrimitiveComponent* Component, FString BoundNeeded) const;
	
	void RopeSwing(float Deltatime);
	void RopeClimb();
	void DrawBonesLocations(bool Condition);
	FName FindClosestBoneToPlayer(ACharacter* Character);
	

	// Rope Swing Variables
	float Currentangle = 0.0f;
	float MaxSwingAngle = 45.0f; // degrees
	float SwingSpeed = 60.0f;
	float RopeDistance = 1.0f;
	FVector RopePivotLocation;

	// Create SceneComponent for the AttatchPoint
	UPROPERTY(EditAnywhere)
	USceneComponent* AttachPoint;
	
	UPROPERTY(EditAnywhere)
	USceneComponent* RopeRoot;
};
