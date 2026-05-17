// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/FloatingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingPlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AFloatingPlatform();
RPGCOMBAT_API UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class AFloatingPlatform
void AFloatingPlatform::StaticRegisterNativesAFloatingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloatingPlatform);
UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister()
{
	return AFloatingPlatform::StaticClass();
}
struct Z_Construct_UClass_AFloatingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingPlatform.h" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "Platfrom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "FloatingPlatform" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform location in world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "FloatingPlatform" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Platfrom" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpTime_MetaData[] = {
		{ "Category", "Platfrom" },
		{ "ModuleRelativePath", "FloatingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_InterpTime = { "InterpTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloatingPlatform, InterpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpTime_MetaData), NewProp_InterpTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_PlatformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingPlatform_Statics::NewProp_InterpTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloatingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloatingPlatform_Statics::ClassParams = {
	&AFloatingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloatingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloatingPlatform()
{
	if (!Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton, Z_Construct_UClass_AFloatingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloatingPlatform.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<AFloatingPlatform>()
{
	return AFloatingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingPlatform);
AFloatingPlatform::~AFloatingPlatform() {}
// End Class AFloatingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloatingPlatform, AFloatingPlatform::StaticClass, TEXT("AFloatingPlatform"), &Z_Registration_Info_UClass_AFloatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloatingPlatform), 425056158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_4218053472(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
