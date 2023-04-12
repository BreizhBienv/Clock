// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/ClockGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClockGameModeBase() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AClockGameModeBase_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AClockGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Clock();
// End Cross Module References
	void AClockGameModeBase::StaticRegisterNativesAClockGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClockGameModeBase);
	UClass* Z_Construct_UClass_AClockGameModeBase_NoRegister()
	{
		return AClockGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AClockGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClockGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClockGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClockGameModeBase.h" },
		{ "ModuleRelativePath", "ClockGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClockGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClockGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClockGameModeBase_Statics::ClassParams = {
		&AClockGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AClockGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClockGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClockGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AClockGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClockGameModeBase.OuterSingleton, Z_Construct_UClass_AClockGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClockGameModeBase.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AClockGameModeBase>()
	{
		return AClockGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClockGameModeBase);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_ClockGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_ClockGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClockGameModeBase, AClockGameModeBase::StaticClass, TEXT("AClockGameModeBase"), &Z_Registration_Info_UClass_AClockGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClockGameModeBase), 2738891551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_ClockGameModeBase_h_1881062151(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_ClockGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_ClockGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
