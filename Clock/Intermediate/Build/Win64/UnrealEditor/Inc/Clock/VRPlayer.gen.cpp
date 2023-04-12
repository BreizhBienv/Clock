// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/VRPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayer() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AVRPlayer_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AVRPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Clock();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRPlayer::execSetPause)
	{
		P_GET_UBOOL(Z_Param_newBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPause(Z_Param_newBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execGetPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execReleaseLevelCompRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseLevelCompRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execGrabLevelCompRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabLevelCompRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execReleaseRightObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseRightObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execGrabRightObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabRightObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execReleaseLevelCompLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseLevelCompLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execGrabLevelCompLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabLevelCompLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execReleaseLeftObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseLeftObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRPlayer::execGrabLeftObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabLeftObject();
		P_NATIVE_END;
	}
	void AVRPlayer::StaticRegisterNativesAVRPlayer()
	{
		UClass* Class = AVRPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPause", &AVRPlayer::execGetPause },
			{ "GrabLeftObject", &AVRPlayer::execGrabLeftObject },
			{ "GrabLevelCompLeft", &AVRPlayer::execGrabLevelCompLeft },
			{ "GrabLevelCompRight", &AVRPlayer::execGrabLevelCompRight },
			{ "GrabRightObject", &AVRPlayer::execGrabRightObject },
			{ "ReleaseLeftObject", &AVRPlayer::execReleaseLeftObject },
			{ "ReleaseLevelCompLeft", &AVRPlayer::execReleaseLevelCompLeft },
			{ "ReleaseLevelCompRight", &AVRPlayer::execReleaseLevelCompRight },
			{ "ReleaseRightObject", &AVRPlayer::execReleaseRightObject },
			{ "SetPause", &AVRPlayer::execSetPause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRPlayer_GetPause_Statics
	{
		struct VRPlayer_eventGetPause_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRPlayer_GetPause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRPlayer_eventGetPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRPlayer_GetPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRPlayer_eventGetPause_Parms), &Z_Construct_UFunction_AVRPlayer_GetPause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayer_GetPause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayer_GetPause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_GetPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_GetPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "GetPause", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRPlayer_GetPause_Statics::VRPlayer_eventGetPause_Parms), Z_Construct_UFunction_AVRPlayer_GetPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GetPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_GetPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GetPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_GetPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_GetPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "GrabLeftObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_GrabLeftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_GrabLeftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "GrabLevelCompLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "GrabLevelCompRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "GrabRightObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_GrabRightObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_GrabRightObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "ReleaseLeftObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "ReleaseLevelCompLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "ReleaseLevelCompRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "ReleaseRightObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_ReleaseRightObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_ReleaseRightObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRPlayer_SetPause_Statics
	{
		struct VRPlayer_eventSetPause_Parms
		{
			bool newBool;
		};
		static void NewProp_newBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRPlayer_SetPause_Statics::NewProp_newBool_SetBit(void* Obj)
	{
		((VRPlayer_eventSetPause_Parms*)Obj)->newBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRPlayer_SetPause_Statics::NewProp_newBool = { "newBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRPlayer_eventSetPause_Parms), &Z_Construct_UFunction_AVRPlayer_SetPause_Statics::NewProp_newBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRPlayer_SetPause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRPlayer_SetPause_Statics::NewProp_newBool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRPlayer_SetPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRPlayer_SetPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPlayer, nullptr, "SetPause", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRPlayer_SetPause_Statics::VRPlayer_eventSetPause_Parms), Z_Construct_UFunction_AVRPlayer_SetPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_SetPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRPlayer_SetPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRPlayer_SetPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRPlayer_SetPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRPlayer_SetPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPlayer);
	UClass* Z_Construct_UClass_AVRPlayer_NoRegister()
	{
		return AVRPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftOverlapCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftOverlapCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftGripStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftGripStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosfromHandBase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosfromHandBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightWidgetInterac_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWidgetInterac;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightGripStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightGripStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRPlayer_GetPause, "GetPause" }, // 917784623
		{ &Z_Construct_UFunction_AVRPlayer_GrabLeftObject, "GrabLeftObject" }, // 2284911764
		{ &Z_Construct_UFunction_AVRPlayer_GrabLevelCompLeft, "GrabLevelCompLeft" }, // 1813269424
		{ &Z_Construct_UFunction_AVRPlayer_GrabLevelCompRight, "GrabLevelCompRight" }, // 3064004764
		{ &Z_Construct_UFunction_AVRPlayer_GrabRightObject, "GrabRightObject" }, // 1564103477
		{ &Z_Construct_UFunction_AVRPlayer_ReleaseLeftObject, "ReleaseLeftObject" }, // 3970391406
		{ &Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompLeft, "ReleaseLevelCompLeft" }, // 2022765883
		{ &Z_Construct_UFunction_AVRPlayer_ReleaseLevelCompRight, "ReleaseLevelCompRight" }, // 4166022756
		{ &Z_Construct_UFunction_AVRPlayer_ReleaseRightObject, "ReleaseRightObject" }, // 1805510610
		{ &Z_Construct_UFunction_AVRPlayer_SetPause, "SetPause" }, // 1924342796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPlayer.h" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_HeadCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_HeadCamera = { "HeadCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, HeadCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_HeadCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_HeadCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftMC_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "//*************** Left Hand  ***************\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
		{ "ToolTip", "*********** Left Hand  ***************" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftMC = { "LeftMC", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftMC), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftMC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftOverlapCollision_MetaData[] = {
		{ "Category", "collision" },
		{ "Comment", "/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Widget)\n\x09""class UWidgetInteractionComponent* LeftWidgetInterac;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Widget)\n       class UWidgetInteractionComponent* LeftWidgetInterac;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftOverlapCollision = { "LeftOverlapCollision", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftOverlapCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftOverlapCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftOverlapCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftGripStrength_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftGripStrength = { "LeftGripStrength", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftGripStrength), METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftGripStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftGripStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftObject_MetaData[] = {
		{ "Category", "ChildObject" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftObject = { "LeftObject", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftLevel_MetaData[] = {
		{ "Category", "ChildObject" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftLevel = { "LeftLevel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, LeftLevel), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//******************************************\n" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_PosfromHandBase_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_PosfromHandBase = { "PosfromHandBase", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, PosfromHandBase), METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_PosfromHandBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_PosfromHandBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightMC_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "//***************  Right Hand  ***************\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
		{ "ToolTip", "***********  Right Hand  ***************" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightMC = { "RightMC", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightMC), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightMC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightWidgetInterac_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightWidgetInterac = { "RightWidgetInterac", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightWidgetInterac), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightWidgetInterac_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightWidgetInterac_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightGripStrength_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightGripStrength = { "RightGripStrength", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightGripStrength), METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightGripStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightGripStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightObject_MetaData[] = {
		{ "Category", "ChildObject" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightObject = { "RightObject", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightLevel_MetaData[] = {
		{ "Category", "ChildObject" },
		{ "ModuleRelativePath", "VRPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightLevel = { "RightLevel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayer, RightLevel), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_HeadCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftOverlapCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftGripStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_LeftLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_PosfromHandBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightWidgetInterac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightGripStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayer_Statics::NewProp_RightLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayer_Statics::ClassParams = {
		&AVRPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayer()
	{
		if (!Z_Registration_Info_UClass_AVRPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPlayer.OuterSingleton, Z_Construct_UClass_AVRPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRPlayer.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AVRPlayer>()
	{
		return AVRPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayer);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_VRPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_VRPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRPlayer, AVRPlayer::StaticClass, TEXT("AVRPlayer"), &Z_Registration_Info_UClass_AVRPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPlayer), 4023538047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_VRPlayer_h_106212411(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_VRPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_VRPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
