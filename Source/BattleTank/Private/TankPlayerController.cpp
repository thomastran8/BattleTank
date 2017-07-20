// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller begin play"));

	FString playerControl = GetControlledTank()->GetName();
	if (playerControl != "")
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller Found: %s"), *playerControl);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Player Controller found"));
	}

}