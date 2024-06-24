// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HealthComponent.h"
#include "Drone.generated.h"


class UHealthComponent;
class UTextRenderComponent;


//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);

UCLASS()
class TESTDRONE_API ADrone : public ACharacter
{
	GENERATED_BODY()


public:

	//UPROPERTY(BlueprintAssignable)
	//FOnHealthChanged OnHealthChanged;

	// Sets default values for this character's properties
	ADrone();

	UPROPERTY(EditAnywhere, Category="Flight")
	float Acceleration = 30.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float MaxSpeed = 4800.f;

	UPROPERTY(VisibleAnywhere, Category = "Flight")
	float MinSpeed = 0.f;

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

	//void ProcessMouseXInput(float Value);
	//void ProcessMouseYInput(float Value);

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

	// Arrows turn
protected:	

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UTextRenderComponent* HealthTextComponent;

	void MoveForward(float InputValue);
	void MoveRight(float InputValue);

	void Turn(float InputValue);
	void LookUp(float InputValue);

	void OnDeath();
	void OnHealthChanged(float Health);
	
};
