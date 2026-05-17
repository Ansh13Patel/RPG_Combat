// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/Critter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCritter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_ACritter();
RPGCOMBAT_API UClass* Z_Construct_UClass_ACritter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class ACritter
void ACritter::StaticRegisterNativesACritter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACritter);
UClass* Z_Construct_UClass_ACritter_NoRegister()
{
	return ACritter::StaticClass();
}
struct Z_Construct_UClass_ACritter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Critter.h" },
		{ "ModuleRelativePath", "Critter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Critter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Critter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Critter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACritter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACritter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACritter, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACritter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACritter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACritter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACritter_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACritter_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACritter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACritter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACritter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACritter_Statics::ClassParams = {
	&ACritter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACritter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACritter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACritter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACritter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACritter()
{
	if (!Z_Registration_Info_UClass_ACritter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACritter.OuterSingleton, Z_Construct_UClass_ACritter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACritter.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<ACritter>()
{
	return ACritter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACritter);
ACritter::~ACritter() {}
// End Class ACritter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACritter, ACritter::StaticClass, TEXT("ACritter"), &Z_Registration_Info_UClass_ACritter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACritter), 3597981606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_626404526(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
