// Fill out your copyright notice in the Description page of Project Settings.


#include "StartingGear.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "RotationButton.h"

AStartingGear::AStartingGear()
{
	this->Tags.Add(TagOfStartingGearTag);
}

void AStartingGear::PropagateSpeedFromStart()
{
	if (RotatingMovement == nullptr) { return; }

	this->RotatingMovement->RotationRate.Yaw = BaseRotationSpeed;
	Speed = BaseRotationSpeed;

	PropagateSpeed();
}