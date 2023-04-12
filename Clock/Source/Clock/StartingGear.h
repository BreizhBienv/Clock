// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gear.h"
#include "StartingGear.generated.h"

/**
 * 
 */
UCLASS()
class CLOCK_API AStartingGear : public AGear
{
	GENERATED_BODY()
	
public:
	AStartingGear();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = variable)
	float BaseRotationSpeed = 180;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
		FName TagOfStartingGearTag = "StartingGear";

public:
	float& GetBaseRotationSpeed() { return BaseRotationSpeed; }

	UFUNCTION()
	void PropagateSpeedFromStart();
};
