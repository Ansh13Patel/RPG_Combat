// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCombatSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
RPGCOMBAT_API UClass* Z_Construct_UClass_URPGCombatSaveGame();
RPGCOMBAT_API UClass* Z_Construct_UClass_URPGCombatSaveGame_NoRegister();
RPGCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin ScriptStruct FCharacterStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStats;
class UScriptStruct* FCharacterStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, (UObject*)Z_Construct_UPackage__Script_RPGCombat(), TEXT("CharacterStats"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton;
}
template<> RPGCOMBAT_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponName_MetaData), NewProp_WeaponName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
	nullptr,
	&NewStructOps,
	"CharacterStats",
	Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
	sizeof(FCharacterStats),
	alignof(FCharacterStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton;
}
// End ScriptStruct FCharacterStats

// Begin Class URPGCombatSaveGame
void URPGCombatSaveGame::StaticRegisterNativesURPGCombatSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGCombatSaveGame);
UClass* Z_Construct_UClass_URPGCombatSaveGame_NoRegister()
{
	return URPGCombatSaveGame::StaticClass();
}
struct Z_Construct_UClass_URPGCombatSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RPGCombatSaveGame.h" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStats_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "RPGCombatSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGCombatSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGCombatSaveGame, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGCombatSaveGame, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGCombatSaveGame, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStats_MetaData), NewProp_CharacterStats_MetaData) }; // 2864221383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGCombatSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCombatSaveGame_Statics::NewProp_CharacterStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCombatSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGCombatSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCombatSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGCombatSaveGame_Statics::ClassParams = {
	&URPGCombatSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGCombatSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGCombatSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGCombatSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGCombatSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGCombatSaveGame()
{
	if (!Z_Registration_Info_UClass_URPGCombatSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGCombatSaveGame.OuterSingleton, Z_Construct_UClass_URPGCombatSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGCombatSaveGame.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<URPGCombatSaveGame>()
{
	return URPGCombatSaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGCombatSaveGame);
URPGCombatSaveGame::~URPGCombatSaveGame() {}
// End Class URPGCombatSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterStats::StaticStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps, TEXT("CharacterStats"), &Z_Registration_Info_UScriptStruct_CharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStats), 2864221383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGCombatSaveGame, URPGCombatSaveGame::StaticClass, TEXT("URPGCombatSaveGame"), &Z_Registration_Info_UClass_URPGCombatSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGCombatSaveGame), 3921636210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_2496029712(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
