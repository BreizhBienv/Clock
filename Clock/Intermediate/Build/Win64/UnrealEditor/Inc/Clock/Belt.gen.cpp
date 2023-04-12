// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/Belt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBelt() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_ABelt_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_ABelt();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Clock();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AGearBeltComp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	void ABelt::StaticRegisterNativesABelt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABelt);
	UClass* Z_Construct_UClass_ABelt_NoRegister()
	{
		return ABelt::StaticClass();
	}
	struct Z_Construct_UClass_ABelt_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GearOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GearTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineCompMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineCompMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkMaxLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinkMaxLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABelt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Belt.h" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_GearOne_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_GearOne = { "GearOne", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, GearOne), Z_Construct_UClass_AGearBeltComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_GearOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_GearOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_GearTwo_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_GearTwo = { "GearTwo", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, GearTwo), Z_Construct_UClass_AGearBeltComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_GearTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_GearTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/* ---------- Spline ---------- */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Belt.h" },
		{ "ToolTip", "---------- Spline ----------" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_SplineCompMesh_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_SplineCompMesh = { "SplineCompMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, SplineCompMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_SplineCompMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_SplineCompMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABelt_Statics::NewProp_LinkMaxLength_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Belt.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABelt_Statics::NewProp_LinkMaxLength = { "LinkMaxLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABelt, LinkMaxLength), METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::NewProp_LinkMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::NewProp_LinkMaxLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABelt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_GearOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_GearTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_SplineCompMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABelt_Statics::NewProp_LinkMaxLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABelt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABelt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABelt_Statics::ClassParams = {
		&ABelt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABelt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABelt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABelt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABelt()
	{
		if (!Z_Registration_Info_UClass_ABelt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABelt.OuterSingleton, Z_Construct_UClass_ABelt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABelt.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<ABelt>()
	{
		return ABelt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABelt);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_Belt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_Belt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABelt, ABelt::StaticClass, TEXT("ABelt"), &Z_Registration_Info_UClass_ABelt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABelt), 2272261944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_Belt_h_1054346972(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_Belt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_Belt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
