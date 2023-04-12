// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/LevelComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelComponent() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_ALevelComponent_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_ALevelComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Clock();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ALevelComponent::StaticRegisterNativesALevelComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelComponent);
	UClass* Z_Construct_UClass_ALevelComponent_NoRegister()
	{
		return ALevelComponent::StaticClass();
	}
	struct Z_Construct_UClass_ALevelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPitchSnapDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitchSnapDegree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinYawSnapDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinYawSnapDegree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelComponent.h" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotateCollision_MetaData[] = {
		{ "Category", "collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotateCollision = { "RotateCollision", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, RotateCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotationScalar_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotationScalar = { "RotationScalar", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, RotationScalar), METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotationScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotationScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinPitchSnapDegree_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinPitchSnapDegree = { "MinPitchSnapDegree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, MinPitchSnapDegree), METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinPitchSnapDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinPitchSnapDegree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinYawSnapDegree_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinYawSnapDegree = { "MinYawSnapDegree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, MinYawSnapDegree), METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinYawSnapDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinYawSnapDegree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelComponent_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelComponent, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::NewProp_InterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_RotationScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinPitchSnapDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_MinYawSnapDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelComponent_Statics::NewProp_InterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelComponent_Statics::ClassParams = {
		&ALevelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelComponent()
	{
		if (!Z_Registration_Info_UClass_ALevelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelComponent.OuterSingleton, Z_Construct_UClass_ALevelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelComponent.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<ALevelComponent>()
	{
		return ALevelComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelComponent);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_LevelComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_LevelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelComponent, ALevelComponent::StaticClass, TEXT("ALevelComponent"), &Z_Registration_Info_UClass_ALevelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelComponent), 378999943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_LevelComponent_h_586112164(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_LevelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_LevelComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
