// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCombatGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameMode();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class ARPGCombatGameMode
void ARPGCombatGameMode::StaticRegisterNativesARPGCombatGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGCombatGameMode);
UClass* Z_Construct_UClass_ARPGCombatGameMode_NoRegister()
{
	return ARPGCombatGameMode::StaticClass();
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
	0x009002ACu,
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
template<> RPGCOMBAT_API UClass* StaticClass<ARPGCombatGameMode>()
{
	return ARPGCombatGameMode::StaticClass();
}
ARPGCombatGameMode::ARPGCombatGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCombatGameMode);
ARPGCombatGameMode::~ARPGCombatGameMode() {}
// End Class ARPGCombatGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCombatGameMode, ARPGCombatGameMode::StaticClass, TEXT("ARPGCombatGameMode"), &Z_Registration_Info_UClass_ARPGCombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCombatGameMode), 1075264694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_3686676813(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
