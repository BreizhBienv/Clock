// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOCK_VRPlayer_generated_h
#error "VRPlayer.generated.h already included, missing '#pragma once' in VRPlayer.h"
#endif
#define CLOCK_VRPlayer_generated_h

#define FID_Marouflards_Source_Clock_VRPlayer_h_12_SPARSE_DATA
#define FID_Marouflards_Source_Clock_VRPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execGetPause); \
	DECLARE_FUNCTION(execReleaseLevelCompRight); \
	DECLARE_FUNCTION(execGrabLevelCompRight); \
	DECLARE_FUNCTION(execReleaseRightObject); \
	DECLARE_FUNCTION(execGrabRightObject); \
	DECLARE_FUNCTION(execReleaseLevelCompLeft); \
	DECLARE_FUNCTION(execGrabLevelCompLeft); \
	DECLARE_FUNCTION(execReleaseLeftObject); \
	DECLARE_FUNCTION(execGrabLeftObject);


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execGetPause); \
	DECLARE_FUNCTION(execReleaseLevelCompRight); \
	DECLARE_FUNCTION(execGrabLevelCompRight); \
	DECLARE_FUNCTION(execReleaseRightObject); \
	DECLARE_FUNCTION(execGrabRightObject); \
	DECLARE_FUNCTION(execReleaseLevelCompLeft); \
	DECLARE_FUNCTION(execGrabLevelCompLeft); \
	DECLARE_FUNCTION(execReleaseLeftObject); \
	DECLARE_FUNCTION(execGrabLeftObject);


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPlayer(); \
	friend struct Z_Construct_UClass_AVRPlayer_Statics; \
public: \
	DECLARE_CLASS(AVRPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayer)


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVRPlayer(); \
	friend struct Z_Construct_UClass_AVRPlayer_Statics; \
public: \
	DECLARE_CLASS(AVRPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayer)


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayer(AVRPlayer&&); \
	NO_API AVRPlayer(const AVRPlayer&); \
public:


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayer(AVRPlayer&&); \
	NO_API AVRPlayer(const AVRPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPlayer)


#define FID_Marouflards_Source_Clock_VRPlayer_h_9_PROLOG
#define FID_Marouflards_Source_Clock_VRPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_INCLASS \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_VRPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_VRPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class AVRPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_VRPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
