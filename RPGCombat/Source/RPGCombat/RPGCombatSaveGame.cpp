// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGCombatSaveGame.h"

URPGCombatSaveGame::URPGCombatSaveGame()
{
	PlayerName = TEXT("Default");
	UserIndex = 0;

	CharacterStats.WeaponName = TEXT("");
	CharacterStats.LevelName = TEXT("");
}