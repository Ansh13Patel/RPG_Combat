// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCombat_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RPGCombat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RPGCombat()
	{
		if (!Z_Registration_Info_UPackage__Script_RPGCombat.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RPGCombat",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x04EE242F,
				0x23798A57,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RPGCombat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RPGCombat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RPGCombat(Z_Construct_UPackage__Script_RPGCombat, TEXT("/Script/RPGCombat"), Z_Registration_Info_UPackage__Script_RPGCombat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x04EE242F, 0x23798A57));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
