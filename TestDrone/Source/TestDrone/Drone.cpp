// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"

// Sets default values
ADrone::ADrone()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADrone::ProcessKeyPitch(float Rate)
{
	if (FMath::Abs(Rate) > 0.2f) 
	{
		ProcessPitch(Rate * 2.0f);
	}
}

void ADrone::ProcessKeyRoll(float Rate)
{
	if (FMath::Abs(Rate) > 0.2f)
	{
		ProcessRoll(Rate * 2.0f);
	}
}

void ADrone::ProcessMouseXInput(float Value)
{
	ProcessPitch(Value);
}

void ADrone::ProcessMouseYInput(float Value)
{
	ProcessRoll(Value);
}

void ADrone::ProcessRoll(float Value)
{
	const float TargetRollSpeed = Value * RollRateMultiplier;

	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.0f);
}

void ADrone::ProcessPitch(float Value)
{
	const float TargetPitchSpeed = Value * PitchRateMultiplier;
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.0f);
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrone::Tick(float DeltaTime)
{

	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;

	AddActorLocalRotation(DeltaRotation);

	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &ADrone::ProcessMouseXInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ADrone::ProcessKeyRoll);
	PlayerInputComponent->BindAxis("LookUp", this, &ADrone::ProcessMouseYInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ADrone::ProcessKeyPitch);

}

