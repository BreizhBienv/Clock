// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gear.generated.h"

UCLASS()
class CLOCK_API AGear : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGear();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Mesh)
	UStaticMeshComponent* Gear;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = collision)
	UStaticMeshComponent* InnerGearOverlap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = collision)
	UStaticMeshComponent* GearTeethOverlap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Transform)
	class URotatingMovementComponent* RotatingMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
	FName TagToAttachTo = "GearSupport";
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
	FName NameOfGearTag = "Gear";

	class AGearSupport* SupportToAttachTo = nullptr;
	UStaticMeshComponent* SupportRendering = nullptr;

	TArray<AGear*> ContactGears;

	AGear* SourceGear = nullptr;

	float Speed = 0;

	float CalculNewSpeed(AGear* InputGear, AGear* OutputGear);

	FTransform StartTransform;

	bool bIsAttached;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnGearOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnGearOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UFUNCTION()
		void OnGearTeethOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnGearTeethOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	class AGearSupport* GetSupport() { return SupportToAttachTo; }
	void SetSupport(class AGearSupport* newSupp) { SupportToAttachTo = newSupp; }

	bool& GetIsAttached() { return bIsAttached; }

	float& GetSpeed() { return Speed; }

	FTransform& GetStartTransform() { return StartTransform; }

	//delegate
	UFUNCTION()
		virtual void PropagateSpeed();

	UFUNCTION()
		void StopRotatingMovement();

	bool OnSnap();

	void UponRemovingFromSupport();

	void PropagateStop();
};
