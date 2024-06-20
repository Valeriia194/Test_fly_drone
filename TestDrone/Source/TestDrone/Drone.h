// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Drone.generated.h"

UCLASS()
class TESTDRONE_API ADrone : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	ADrone();

	UPROPERTY(EditAnywhere, Category="Flight")
	float Acceleration = 30.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float MaxSpeed = 4800.f;

	UPROPERTY(VisibleAnywhere, Category = "Flight")
	float MinSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float CurrentForwardSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float RollRateMultiplier = 200.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float PitchRateMultiplier = 200.f;

	float CurrentYawSpeed;
	float CurrentPitchSpeed;
	float CurrentRollSpeed;

	bool bIntentionalPitch = false;
	bool bIntentionalRoll = false;

protected:
	// Called when the game starts or when spawned

	void ProcessKeyPitch(float Rate);
	void ProcessKeyRoll(float Rate);

	void ProcessMouseXInput(float Value);
	void ProcessMouseYInput(float Value);

	// Calculate rotation
	void ProcessRoll(float Value);
	void ProcessPitch(float Value);

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
