// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGCombatGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameMode();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARPGCombatGameMode *******************************************************
void ARPGCombatGameMode::StaticRegisterNativesARPGCombatGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARPGCombatGameMode;
UClass* ARPGCombatGameMode::GetPrivateStaticClass()
{
	using TClass = ARPGCombatGameMode;
	if (!Z_Registration_Info_UClass_ARPGCombatGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGCombatGameMode"),
			Z_Registration_Info_UClass_ARPGCombatGameMode.InnerSingleton,
			StaticRegisterNativesARPGCombatGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARPGCombatGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ARPGCombatGameMode_NoRegister()
{
	return ARPGCombatGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARPGCombatGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGCombatGameMode.h" },
		{ "ModuleRelativePath", "RPGCombatGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCombatGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARPGCombatGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCombatGameMode_Statics::ClassParams = {
	&ARPGCombatGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGCombatGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGCombatGameMode()
{
	if (!Z_Registration_Info_UClass_ARPGCombatGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCombatGameMode.OuterSingleton, Z_Construct_UClass_ARPGCombatGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGCombatGameMode.OuterSingleton;
}
ARPGCombatGameMode::ARPGCombatGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCombatGameMode);
ARPGCombatGameMode::~ARPGCombatGameMode() {}
// ********** End Class ARPGCombatGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h__Script_RPGCombat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCombatGameMode, ARPGCombatGameMode::StaticClass, TEXT("ARPGCombatGameMode"), &Z_Registration_Info_UClass_ARPGCombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCombatGameMode), 1198633036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h__Script_RPGCombat_192159381(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h__Script_RPGCombat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h__Script_RPGCombat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
