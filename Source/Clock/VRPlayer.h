// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VRPlayer.generated.h"

UCLASS(config=Game)
class CLOCK_API AVRPlayer : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* HeadCamera;

public:
	// Sets default values for this pawn's properties
	AVRPlayer();

protected:
	bool bPause = false;

	class AGameManager* GameManager;

	//*************** Left Hand  ***************
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = MotionController)
	class UMotionControllerComponent* LeftMC;

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Widget)
	class UWidgetInteractionComponent* LeftWidgetInterac;*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = collision)
	class UCapsuleComponent* LeftOverlapCollision;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Skeletal)
	USkeletalMeshComponent* LeftHand;

	UPROPERTY(BlueprintReadWrite, Category = Variable)
	float LeftGripStrength = 0;

	UPROPERTY(BlueprintReadWrite, Category = ChildObject)
	AActor* LeftObject = nullptr;
	
	UPROPERTY(BlueprintReadWrite, Category = ChildObject)
	AActor* LeftLevel = nullptr;
	
	UFUNCTION(BlueprintCallable)
	void GrabLeftObject();

	UFUNCTION(BlueprintCallable)
	void ReleaseLeftObject();

	UFUNCTION()
		void GrabLevelCompLeft();

	UFUNCTION()
		void ReleaseLevelCompLeft();

	//******************************************

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Collision)
	float SphereRadius = 5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Collision)
	float PosfromHandBase = 10;

	bool GetObjectIfAcceptable(FHitResult& result, USkeletalMeshComponent* Hand);

	bool GetLevelCompIfAcceptable(FHitResult& result, USkeletalMeshComponent* Hand);

	void AttachGearToSupport(AActor* Object);

	//***************  Right Hand  ***************
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = MotionController)
	class UMotionControllerComponent* RightMC;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Widget)
	class UWidgetInteractionComponent* RightWidgetInterac;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Skeletal)
	USkeletalMeshComponent* RightHand;

	UPROPERTY(BlueprintReadWrite, Category = Variable)
	float RightGripStrength = 0;
	
	UPROPERTY(BlueprintReadWrite, Category = ChildObject)
	AActor* RightObject = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = ChildObject)
		AActor* RightLevel = nullptr;

	UFUNCTION(BlueprintCallable)
	void GrabRightObject();

	UFUNCTION(BlueprintCallable)
	void ReleaseRightObject();

	UFUNCTION()
		void GrabLevelCompRight();

	UFUNCTION()
		void ReleaseLevelCompRight();


	//********************************************

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

		void RemoveGearFromSupportUponGrabbing(AActor* actor);

public:	

	AActor* GetLeftObject() { return LeftObject; }
	void SetLeftObject(AActor* newObject) { LeftObject = newObject; }

	AActor* GetRightObject() { return RightObject; }
	void SetRightObject(AActor* newObject) { RightObject = newObject; }

	UFUNCTION(BlueprintCallable)
	bool& GetPause() { return bPause; }

	UFUNCTION(BlueprintCallable)
	void SetPause(bool newBool) { bPause = newBool; }
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
