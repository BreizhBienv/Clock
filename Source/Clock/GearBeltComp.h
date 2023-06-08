// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gear.h"
#include "GearBeltComp.generated.h"

/**
 * 
 */
UCLASS()
class CLOCK_API AGearBeltComp : public AGear
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	AGearBeltComp();

protected:
	AGearBeltComp* LinkedGear;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PropagateSpeed() override;

	UFUNCTION(BlueprintCallable)
		AGearBeltComp* GetLinkedGear() { return LinkedGear; }
	UFUNCTION(BlueprintCallable)
		void SetLinkedGear(AGearBeltComp* OtherGear) { LinkedGear = OtherGear; }
};
