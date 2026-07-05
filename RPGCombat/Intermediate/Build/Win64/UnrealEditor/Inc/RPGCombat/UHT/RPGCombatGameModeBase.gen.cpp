// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGCombatGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARPGCombatGameModeBase ***************************************************
void ARPGCombatGameModeBase::StaticRegisterNativesARPGCombatGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARPGCombatGameModeBase;
UClass* ARPGCombatGameModeBase::GetPrivateStaticClass()
{
	using TClass = ARPGCombatGameModeBase;
	if (!Z_Registration_Info_UClass_ARPGCombatGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGCombatGameModeBase"),
			Z_Registration_Info_UClass_ARPGCombatGameModeBase.InnerSingleton,
			StaticRegisterNativesARPGCombatGameModeBase,
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
	return Z_Registration_Info_UClass_ARPGCombatGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister()
{
	return ARPGCombatGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARPGCombatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGCombatGameModeBase.h" },
		{ "ModuleRelativePath", "RPGCombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCombatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARPGCombatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams = {
	&ARPGCombatGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGCombatGameModeBase()
{
	if (!Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton, Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton;
}
ARPGCombatGameModeBase::ARPGCombatGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCombatGameModeBase);
ARPGCombatGameModeBase::~ARPGCombatGameModeBase() {}
// ********** End Class ARPGCombatGameModeBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h__Script_RPGCombat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCombatGameModeBase, ARPGCombatGameModeBase::StaticClass, TEXT("ARPGCombatGameModeBase"), &Z_Registration_Info_UClass_ARPGCombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCombatGameModeBase), 1039303662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h__Script_RPGCombat_3488372204(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h__Script_RPGCombat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h__Script_RPGCombat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
