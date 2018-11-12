// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	ATank* AITank = GetTank();

	if (!AITank)
	{
		UE_LOG(LogTemp, Error, TEXT("AI not possessing tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s possessed by AI"), *AITank->GetName());
	}
}

ATank * ATankAIController::GetTank()
{
	return Cast<ATank>(GetPawn());
}
