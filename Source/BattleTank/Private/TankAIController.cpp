// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AI Controller begin play"));
}

void ATankAIController::FindAiController()
{
	FString aiControl = GetControlledTank()->GetName();

	if (aiControl != "")
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller Found: %s"), *aiControl);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No AI Controller found"));
	}
}
