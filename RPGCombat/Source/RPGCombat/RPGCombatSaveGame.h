// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RPGCombatSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStats
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	float Health;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	float Stamina;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	float MaxStamina;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	int32 Coins;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FString WeaponName;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FString LevelName;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FVector Location;
	
	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FRotator Rotation;
};
/**
 * 
 */
UCLASS()
class RPGCOMBAT_API URPGCombatSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	URPGCombatSaveGame();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int32 UserIndex;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FCharacterStats CharacterStats;
	
};
