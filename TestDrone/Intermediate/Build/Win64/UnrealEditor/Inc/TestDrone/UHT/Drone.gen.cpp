// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestDrone/Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TESTDRONE_API UClass* Z_Construct_UClass_ADrone();
	TESTDRONE_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestDrone();
// End Cross Module References
	void ADrone::StaticRegisterNativesADrone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone);
	UClass* Z_Construct_UClass_ADrone_NoRegister()
	{
		return ADrone::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentForwardSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentForwardSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRateMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestDrone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Drone.h" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_Acceleration_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MaxSpeed_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MinSpeed_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MinSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_CurrentForwardSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_CurrentForwardSpeed = { "CurrentForwardSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, CurrentForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_CurrentForwardSpeed_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_CurrentForwardSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_RollRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_RollRateMultiplier = { "RollRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, RollRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_RollRateMultiplier_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_RollRateMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_PitchRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_PitchRateMultiplier = { "PitchRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, PitchRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_PitchRateMultiplier_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_PitchRateMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_CurrentForwardSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_RollRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_PitchRateMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_Statics::ClassParams = {
		&ADrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrone()
	{
		if (!Z_Registration_Info_UClass_ADrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone.OuterSingleton, Z_Construct_UClass_ADrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone.OuterSingleton;
	}
	template<> TESTDRONE_API UClass* StaticClass<ADrone>()
	{
		return ADrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone);
	ADrone::~ADrone() {}
	struct Z_CompiledInDeferFile_FID_TestTaskDrone_Test_fly_drone_TestDrone_Source_TestDrone_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestTaskDrone_Test_fly_drone_TestDrone_Source_TestDrone_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone, ADrone::StaticClass, TEXT("ADrone"), &Z_Registration_Info_UClass_ADrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone), 3899406041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestTaskDrone_Test_fly_drone_TestDrone_Source_TestDrone_Drone_h_210108636(TEXT("/Script/TestDrone"),
		Z_CompiledInDeferFile_FID_TestTaskDrone_Test_fly_drone_TestDrone_Source_TestDrone_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestTaskDrone_Test_fly_drone_TestDrone_Source_TestDrone_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
