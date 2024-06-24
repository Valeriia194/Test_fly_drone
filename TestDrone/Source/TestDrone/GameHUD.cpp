// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

}

//void AGameHUD::BeginPlay() {
//
//Super::BeginPlay();
//auto PlayerHUDWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidgetClass);
//if (PlayerHUDWidget) {
//	PlayerHUDWidget->AddToViewport();
//}
//}