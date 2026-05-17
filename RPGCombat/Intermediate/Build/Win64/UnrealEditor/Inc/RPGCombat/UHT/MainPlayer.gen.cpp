// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/MainPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AItem_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AItemStorage_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayer();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
RPGCOMBAT_API UEnum* Z_Construct_UEnum_RPGCombat_EMovementStatus();
RPGCOMBAT_API UEnum* Z_Construct_UEnum_RPGCombat_EStaminaStatus();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Enum EMovementStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementStatus;
static UEnum* EMovementStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGCombat_EMovementStatus, (UObject*)Z_Construct_UPackage__Script_RPGCombat(), TEXT("EMovementStatus"));
	}
	return Z_Registration_Info_UEnum_EMovementStatus.OuterSingleton;
}
template<> RPGCOMBAT_API UEnum* StaticEnum<EMovementStatus>()
{
	return EMovementStatus_StaticEnum();
}
struct Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMS_Dead.displayname", "Dead" },
		{ "EMS_Dead.Name", "EMovementStatus::EMS_Dead" },
		{ "EMS_MAX.displayname", "DefaultMAX" },
		{ "EMS_MAX.Name", "EMovementStatus::EMS_MAX" },
		{ "EMS_Normal.disaplayname", "Normal" },
		{ "EMS_Normal.Name", "EMovementStatus::EMS_Normal" },
		{ "EMS_Sprinting.displayname", "Sprinting" },
		{ "EMS_Sprinting.Name", "EMovementStatus::EMS_Sprinting" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementStatus::EMS_Normal", (int64)EMovementStatus::EMS_Normal },
		{ "EMovementStatus::EMS_Sprinting", (int64)EMovementStatus::EMS_Sprinting },
		{ "EMovementStatus::EMS_Dead", (int64)EMovementStatus::EMS_Dead },
		{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPGCombat,
	nullptr,
	"EMovementStatus",
	"EMovementStatus",
	Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPGCombat_EMovementStatus()
{
	if (!Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton, Z_Construct_UEnum_RPGCombat_EMovementStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementStatus.InnerSingleton;
}
// End Enum EMovementStatus

// Begin Enum EStaminaStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaminaStatus;
static UEnum* EStaminaStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStaminaStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStaminaStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGCombat_EStaminaStatus, (UObject*)Z_Construct_UPackage__Script_RPGCombat(), TEXT("EStaminaStatus"));
	}
	return Z_Registration_Info_UEnum_EStaminaStatus.OuterSingleton;
}
template<> RPGCOMBAT_API UEnum* StaticEnum<EStaminaStatus>()
{
	return EStaminaStatus_StaticEnum();
}
struct Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESS_BelowMinimum.displayname", "Below Minimum" },
		{ "ESS_BelowMinimum.Name", "EStaminaStatus::ESS_BelowMinimum" },
		{ "ESS_Exhausted.displayname", "Exhausted" },
		{ "ESS_Exhausted.Name", "EStaminaStatus::ESS_Exhausted" },
		{ "ESS_ExhaustedRecovering.displayname", "Exhausted Recovering" },
		{ "ESS_ExhaustedRecovering.Name", "EStaminaStatus::ESS_ExhaustedRecovering" },
		{ "ESS_MAX.displayname", "DefaultMAX" },
		{ "ESS_MAX.Name", "EStaminaStatus::ESS_MAX" },
		{ "ESS_Normal.displayname", "Normal" },
		{ "ESS_Normal.Name", "EStaminaStatus::ESS_Normal" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStaminaStatus::ESS_Normal", (int64)EStaminaStatus::ESS_Normal },
		{ "EStaminaStatus::ESS_BelowMinimum", (int64)EStaminaStatus::ESS_BelowMinimum },
		{ "EStaminaStatus::ESS_Exhausted", (int64)EStaminaStatus::ESS_Exhausted },
		{ "EStaminaStatus::ESS_ExhaustedRecovering", (int64)EStaminaStatus::ESS_ExhaustedRecovering },
		{ "EStaminaStatus::ESS_MAX", (int64)EStaminaStatus::ESS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPGCombat,
	nullptr,
	"EStaminaStatus",
	"EStaminaStatus",
	Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPGCombat_EStaminaStatus()
{
	if (!Z_Registration_Info_UEnum_EStaminaStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaminaStatus.InnerSingleton, Z_Construct_UEnum_RPGCombat_EStaminaStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStaminaStatus.InnerSingleton;
}
// End Enum EStaminaStatus

// Begin Class AMainPlayer Function AttackEnd
struct Z_Construct_UFunction_AMainPlayer_AttackEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "AttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_AttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_AttackEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayer_AttackEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_AttackEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execAttackEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackEnd();
	P_NATIVE_END;
}
// End Class AMainPlayer Function AttackEnd

// Begin Class AMainPlayer Function DeathEnd
struct Z_Construct_UFunction_AMainPlayer_DeathEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_DeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "DeathEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_DeathEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_DeathEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayer_DeathEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_DeathEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execDeathEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeathEnd();
	P_NATIVE_END;
}
// End Class AMainPlayer Function DeathEnd

// Begin Class AMainPlayer Function IncrementCoin
struct Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics
{
	struct MainPlayer_eventIncrementCoin_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainPlayer_eventIncrementCoin_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "IncrementCoin", nullptr, nullptr, Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::MainPlayer_eventIncrementCoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::MainPlayer_eventIncrementCoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainPlayer_IncrementCoin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_IncrementCoin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execIncrementCoin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementCoin(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AMainPlayer Function IncrementCoin

// Begin Class AMainPlayer Function IncrementHealth
struct Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics
{
	struct MainPlayer_eventIncrementHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainPlayer_eventIncrementHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "IncrementHealth", nullptr, nullptr, Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::MainPlayer_eventIncrementHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::MainPlayer_eventIncrementHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainPlayer_IncrementHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_IncrementHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execIncrementHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AMainPlayer Function IncrementHealth

// Begin Class AMainPlayer Function LoadGame
struct Z_Construct_UFunction_AMainPlayer_LoadGame_Statics
{
	struct MainPlayer_eventLoadGame_Parms
	{
		bool SetPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SetPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::NewProp_SetPosition_SetBit(void* Obj)
{
	((MainPlayer_eventLoadGame_Parms*)Obj)->SetPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::NewProp_SetPosition = { "SetPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainPlayer_eventLoadGame_Parms), &Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::NewProp_SetPosition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::NewProp_SetPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "LoadGame", nullptr, nullptr, Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::MainPlayer_eventLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::MainPlayer_eventLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainPlayer_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execLoadGame)
{
	P_GET_UBOOL(Z_Param_SetPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGame(Z_Param_SetPosition);
	P_NATIVE_END;
}
// End Class AMainPlayer Function LoadGame

// Begin Class AMainPlayer Function PlaySwingSound
struct Z_Construct_UFunction_AMainPlayer_PlaySwingSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_PlaySwingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "PlaySwingSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_PlaySwingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_PlaySwingSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayer_PlaySwingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_PlaySwingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execPlaySwingSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySwingSound();
	P_NATIVE_END;
}
// End Class AMainPlayer Function PlaySwingSound

// Begin Class AMainPlayer Function SaveGame
struct Z_Construct_UFunction_AMainPlayer_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_SaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayer_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGame();
	P_NATIVE_END;
}
// End Class AMainPlayer Function SaveGame

// Begin Class AMainPlayer Function ShowPickupLocations
struct Z_Construct_UFunction_AMainPlayer_ShowPickupLocations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_ShowPickupLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "ShowPickupLocations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_ShowPickupLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayer_ShowPickupLocations_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayer_ShowPickupLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayer_ShowPickupLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayer::execShowPickupLocations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPickupLocations();
	P_NATIVE_END;
}
// End Class AMainPlayer Function ShowPickupLocations

// Begin Class AMainPlayer
void AMainPlayer::StaticRegisterNativesAMainPlayer()
{
	UClass* Class = AMainPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackEnd", &AMainPlayer::execAttackEnd },
		{ "DeathEnd", &AMainPlayer::execDeathEnd },
		{ "IncrementCoin", &AMainPlayer::execIncrementCoin },
		{ "IncrementHealth", &AMainPlayer::execIncrementHealth },
		{ "LoadGame", &AMainPlayer::execLoadGame },
		{ "PlaySwingSound", &AMainPlayer::execPlaySwingSound },
		{ "SaveGame", &AMainPlayer::execSaveGame },
		{ "ShowPickupLocations", &AMainPlayer::execShowPickupLocations },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayer);
UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
{
	return AMainPlayer::StaticClass();
}
struct Z_Construct_UClass_AMainPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayer.h" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStorage_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitParticles_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaGainRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSprintStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPlayerController_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCombatTarget_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetLocation_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Camera Boom position the camera behind player*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Boom position the camera behind player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Follow Camera*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09/*\n\x09/* Player Stats\n\x09/*\n\x09*/" },
#endif
		{ "ModuleRelativePath", "MainPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOverlappingItem_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttacking_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack1_Speed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack2_Speed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFilter_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponStorage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StaminaStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StaminaStatus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaGainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSprintStamina;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
	static void NewProp_bHasCombatTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCombatTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveOverlappingItem;
	static void NewProp_bAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack1_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack2_Speed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayer_AttackEnd, "AttackEnd" }, // 542758902
		{ &Z_Construct_UFunction_AMainPlayer_DeathEnd, "DeathEnd" }, // 1429543676
		{ &Z_Construct_UFunction_AMainPlayer_IncrementCoin, "IncrementCoin" }, // 3779044967
		{ &Z_Construct_UFunction_AMainPlayer_IncrementHealth, "IncrementHealth" }, // 863145393
		{ &Z_Construct_UFunction_AMainPlayer_LoadGame, "LoadGame" }, // 1124622872
		{ &Z_Construct_UFunction_AMainPlayer_PlaySwingSound, "PlaySwingSound" }, // 44910343
		{ &Z_Construct_UFunction_AMainPlayer_SaveGame, "SaveGame" }, // 187283368
		{ &Z_Construct_UFunction_AMainPlayer_ShowPickupLocations, "ShowPickupLocations" }, // 605604631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_WeaponStorage = { "WeaponStorage", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, WeaponStorage), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemStorage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponStorage_MetaData), NewProp_WeaponStorage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_HitParticles = { "HitParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, HitParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitParticles_MetaData), NewProp_HitParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, HitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSound_MetaData), NewProp_HitSound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MovementStatus = { "MovementStatus", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, MovementStatus), Z_Construct_UEnum_RPGCombat_EMovementStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStatus_MetaData), NewProp_MovementStatus_MetaData) }; // 3060665588
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaStatus = { "StaminaStatus", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, StaminaStatus), Z_Construct_UEnum_RPGCombat_EStaminaStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaStatus_MetaData), NewProp_StaminaStatus_MetaData) }; // 2306614456
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, StaminaDrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainRate_MetaData), NewProp_StaminaDrainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaGainRate = { "StaminaGainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, StaminaGainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaGainRate_MetaData), NewProp_StaminaGainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MinSprintStamina = { "MinSprintStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, MinSprintStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSprintStamina_MetaData), NewProp_MinSprintStamina_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MainPlayerController = { "MainPlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, MainPlayerController), Z_Construct_UClass_AMainPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPlayerController_MetaData), NewProp_MainPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, CombatTarget), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, RunningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningSpeed_MetaData), NewProp_RunningSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, SprintingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingSpeed_MetaData), NewProp_SprintingSpeed_MetaData) };
void Z_Construct_UClass_AMainPlayer_Statics::NewProp_bHasCombatTarget_SetBit(void* Obj)
{
	((AMainPlayer*)Obj)->bHasCombatTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_bHasCombatTarget = { "bHasCombatTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainPlayer), &Z_Construct_UClass_AMainPlayer_Statics::NewProp_bHasCombatTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCombatTarget_MetaData), NewProp_bHasCombatTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatTargetLocation = { "CombatTargetLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, CombatTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTargetLocation_MetaData), NewProp_CombatTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_ActiveOverlappingItem = { "ActiveOverlappingItem", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, ActiveOverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveOverlappingItem_MetaData), NewProp_ActiveOverlappingItem_MetaData) };
void Z_Construct_UClass_AMainPlayer_Statics::NewProp_bAttacking_SetBit(void* Obj)
{
	((AMainPlayer*)Obj)->bAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_bAttacking = { "bAttacking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainPlayer), &Z_Construct_UClass_AMainPlayer_Statics::NewProp_bAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttacking_MetaData), NewProp_bAttacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatMontage_MetaData), NewProp_CombatMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Attack1_Speed = { "Attack1_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, Attack1_Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack1_Speed_MetaData), NewProp_Attack1_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Attack2_Speed = { "Attack2_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, Attack2_Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack2_Speed_MetaData), NewProp_Attack2_Speed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_EnemyFilter = { "EnemyFilter", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayer, EnemyFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyFilter_MetaData), NewProp_EnemyFilter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_WeaponStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_HitParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_HitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MovementStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MovementStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaDrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_StaminaGainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MinSprintStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MainPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_RunningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_SprintingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_bHasCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_ActiveOverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_bAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CombatMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Attack1_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Attack2_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_EnemyFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_Statics::ClassParams = {
	&AMainPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayer()
{
	if (!Z_Registration_Info_UClass_AMainPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayer.OuterSingleton, Z_Construct_UClass_AMainPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayer.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<AMainPlayer>()
{
	return AMainPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
AMainPlayer::~AMainPlayer() {}
// End Class AMainPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementStatus_StaticEnum, TEXT("EMovementStatus"), &Z_Registration_Info_UEnum_EMovementStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3060665588U) },
		{ EStaminaStatus_StaticEnum, TEXT("EStaminaStatus"), &Z_Registration_Info_UEnum_EStaminaStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2306614456U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayer, AMainPlayer::StaticClass, TEXT("AMainPlayer"), &Z_Registration_Info_UClass_AMainPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayer), 1508990754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_3494957081(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
