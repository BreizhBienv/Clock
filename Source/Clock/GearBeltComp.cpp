// Fill out your copyright notice in the Description page of Project Settings.


#include "GearBeltComp.h"
#include "StartingGear.h"
#include "GameFramework/RotatingMovementComponent.h"

AGearBeltComp::AGearBeltComp()
{
}

void AGearBeltComp::BeginPlay()
{
	AGear::BeginPlay();

}

void AGearBeltComp::Tick(float DeltaTime)
{
	AGear::Tick(DeltaTime);


}

void AGearBeltComp::PropagateSpeed()
{
	AGear::PropagateSpeed();

	if (!LinkedGear) { return; }
	if (LinkedGear == SourceGear || LinkedGear->IsA(AStartingGear::StaticClass()) ||
		!LinkedGear->RotatingMovement) return;

	LinkedGear->Speed = CalculNewSpeed(this, LinkedGear) * -1;
	LinkedGear->RotatingMovement->RotationRate.Yaw = LinkedGear->Speed;

	LinkedGear->SourceGear = this;
	LinkedGear->PropagateSpeed();
}
