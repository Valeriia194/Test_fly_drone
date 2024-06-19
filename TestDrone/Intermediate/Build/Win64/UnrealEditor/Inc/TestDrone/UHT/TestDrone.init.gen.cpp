// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestDrone_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestDrone;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestDrone()
	{
		if (!Z_Registration_Info_UPackage__Script_TestDrone.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestDrone",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC5418C29,
				0xA60F21C4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestDrone.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestDrone.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestDrone(Z_Construct_UPackage__Script_TestDrone, TEXT("/Script/TestDrone"), Z_Registration_Info_UPackage__Script_TestDrone, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC5418C29, 0xA60F21C4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
