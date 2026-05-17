// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/SpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_ASpawnVolume();
RPGCOMBAT_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class ASpawnVolume Function GetSpawnActor
struct Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics
{
	struct SpawnVolume_eventGetSpawnActor_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventGetSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "GetSpawnActor", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::SpawnVolume_eventGetSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::SpawnVolume_eventGetSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_GetSpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_GetSpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execGetSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetSpawnActor();
	P_NATIVE_END;
}
// End Class ASpawnVolume Function GetSpawnActor

// Begin Class ASpawnVolume Function GetSpawnPoint
struct Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics
{
	struct SpawnVolume_eventGetSpawnPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventGetSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "GetSpawnPoint", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::SpawnVolume_eventGetSpawnPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::SpawnVolume_eventGetSpawnPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execGetSpawnPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSpawnPoint();
	P_NATIVE_END;
}
// End Class ASpawnVolume Function GetSpawnPoint

// Begin Class ASpawnVolume Function SpawnOurActor
struct SpawnVolume_eventSpawnOurActor_Parms
{
	UClass* ToSpawn;
	FVector Location;
};
static const FName NAME_ASpawnVolume_SpawnOurActor = FName(TEXT("SpawnOurActor"));
void ASpawnVolume::SpawnOurActor(UClass* ToSpawn, FVector const& Location)
{
	UFunction* Func = FindFunctionChecked(NAME_ASpawnVolume_SpawnOurActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SpawnVolume_eventSpawnOurActor_Parms Parms;
		Parms.ToSpawn=ToSpawn;
		Parms.Location=Location;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SpawnOurActor_Implementation(ToSpawn, Location);
	}
}
struct Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventSpawnOurActor_Parms, ToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventSpawnOurActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::NewProp_ToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "SpawnOurActor", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::PropPointers), sizeof(SpawnVolume_eventSpawnOurActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpawnVolume_eventSpawnOurActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_SpawnOurActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_SpawnOurActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execSpawnOurActor)
{
	P_GET_OBJECT(UClass,Z_Param_ToSpawn);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnOurActor_Implementation(Z_Param_ToSpawn,Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class ASpawnVolume Function SpawnOurActor

// Begin Class ASpawnVolume
void ASpawnVolume::StaticRegisterNativesASpawnVolume()
{
	UClass* Class = ASpawnVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawnActor", &ASpawnVolume::execGetSpawnActor },
		{ "GetSpawnPoint", &ASpawnVolume::execGetSpawnPoint },
		{ "SpawnOurActor", &ASpawnVolume::execSpawnOurActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnVolume);
UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
{
	return ASpawnVolume::StaticClass();
}
struct Z_Construct_UClass_ASpawnVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnVolume.h" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningBox_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_1_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_2_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_3_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_4_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor_1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor_2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor_3;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor_4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnVolume_GetSpawnActor, "GetSpawnActor" }, // 372869045
		{ &Z_Construct_UFunction_ASpawnVolume_GetSpawnPoint, "GetSpawnPoint" }, // 3378709203
		{ &Z_Construct_UFunction_ASpawnVolume_SpawnOurActor, "SpawnOurActor" }, // 955285369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox = { "SpawningBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, SpawningBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningBox_MetaData), NewProp_SpawningBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_1 = { "Actor_1", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, Actor_1), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_1_MetaData), NewProp_Actor_1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_2 = { "Actor_2", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, Actor_2), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_2_MetaData), NewProp_Actor_2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_3 = { "Actor_3", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, Actor_3), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_3_MetaData), NewProp_Actor_3_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_4 = { "Actor_4", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, Actor_4), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_4_MetaData), NewProp_Actor_4_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Actor_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnVolume_Statics::ClassParams = {
	&ASpawnVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnVolume()
{
	if (!Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton, Z_Construct_UClass_ASpawnVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<ASpawnVolume>()
{
	return ASpawnVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
ASpawnVolume::~ASpawnVolume() {}
// End Class ASpawnVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnVolume, ASpawnVolume::StaticClass, TEXT("ASpawnVolume"), &Z_Registration_Info_UClass_ASpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnVolume), 3029885637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_1836055240(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
