// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelComponent.generated.h"

class UMotionControllerComponent;

UCLASS()
class CLOCK_API ALevelComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelComponent();

protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Root)
		USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = collision)
		class USphereComponent* RotateCollision;

	USkeletalMeshComponent* ParentHand = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Variable)
		float RotationScalar = 2;	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Variable)
		float MinPitchSnapDegree = 45;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Variable)
		float MinYawSnapDegree = 45;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Variable)
		float InterpSpeed = 10;

	//yaw
	float HandYOldPos;

	//pitch
	float HandZOldPos;

	FRotator StartLerpRotator;

	FRotator TargetLerpRotator;

	bool bShouldSnap = false;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RotateThroughHand();

	void CalculTarget(double value, double& Target);

	void SnapLevel(float DeltaTime);

public:	
	USkeletalMeshComponent* GetParentHand() { return ParentHand; }
	void SetParentHand(USkeletalMeshComponent* newHand) { ParentHand = newHand; }

	bool& GetShouldSnap() { return bShouldSnap; }

	void SetYOldPos(float newX) { HandYOldPos = newX; }

	void SetZOldPos(float newY) { HandZOldPos = newY; }

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RegisterRotationInformation();
};
