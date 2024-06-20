// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ADrone::ADrone()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	//Camera->SetupAttachment(RootComponent);
	//Camera->bUsePawnControlRotation = true;


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

//void ADrone::ProcessMouseXInput(float Value)
//{
//	ProcessPitch(Value);
//}
//
//void ADrone::ProcessMouseYInput(float Value)
//{
//	ProcessRoll(Value);
//}

void ADrone::ProcessRoll(float Value)
{
	bIntentionalRoll = FMath::Abs(Value) > 0.f;
	if (bIntentionalPitch && !bIntentionalRoll) return;

	const float TargetRollSpeed = bIntentionalRoll ? (Value * RollRateMultiplier) : (GetActorRotation().Roll * -2.f);

	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.0f);
}

void ADrone::ProcessPitch(float Value)
{
	bIntentionalPitch = FMath::Abs(Value) > 0.f;

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

	const float CurrentAcc = -GetActorRotation().Pitch * DeltaTime * Acceleration;
	const float NewForwardSpeed = CurrentForwardSpeed * CurrentAcc;
	CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);

	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.f, 0.f);
	AddActorLocalOffset(LocalMove, true);

	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;

	AddActorLocalRotation(DeltaRotation);

	GEngine->AddOnScreenDebugMessage(0, 0.f, FColor::Green, FString::Printf(TEXT("Forward Speed: %f"), CurrentForwardSpeed));

	Super::Tick(DeltaTime);

}

void ADrone::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along surface

	const FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));

	// Slow
	CurrentForwardSpeed = FMath::FInterpTo(CurrentForwardSpeed, MinSpeed, GetWorld()->GetDeltaSeconds(), 0.5f);
}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("Turn", this, &ADrone::ProcessMouseXInput);
	//PlayerInputComponent->BindAxis("LookUp", this, &ADrone::ProcessMouseYInput);
	
	PlayerInputComponent->BindAxis("TurnRate", this, &ADrone::ProcessKeyRoll);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ADrone::ProcessKeyPitch);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADrone::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADrone::MoveRight);
	PlayerInputComponent->BindAxis("TurnCamera", this, &ADrone::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ADrone::LookUp);
}

void ADrone::MoveForward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();
	AddMovementInput(ForwardDirection, InputValue);
}

void ADrone::MoveRight(float InputValue)
{
	FVector RightDirection = GetActorRightVector();
	AddMovementInput(RightDirection, InputValue);
}

void ADrone::Turn(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void ADrone::LookUp(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

