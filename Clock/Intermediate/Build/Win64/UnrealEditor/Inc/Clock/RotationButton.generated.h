// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CLOCK_RotationButton_generated_h
#error "RotationButton.generated.h already included, missing '#pragma once' in RotationButton.h"
#endif
#define CLOCK_RotationButton_generated_h

#define FID_Marouflards_Source_Clock_RotationButton_h_10_DELEGATE \
static inline void FRotateGears_DelegateWrapper(const FMulticastScriptDelegate& RotateGears) \
{ \
	RotateGears.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Marouflards_Source_Clock_RotationButton_h_11_DELEGATE \
static inline void FStopGears_DelegateWrapper(const FMulticastScriptDelegate& StopGears) \
{ \
	StopGears.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Marouflards_Source_Clock_RotationButton_h_16_SPARSE_DATA
#define FID_Marouflards_Source_Clock_RotationButton_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Marouflards_Source_Clock_RotationButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Marouflards_Source_Clock_RotationButton_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotationButton(); \
	friend struct Z_Construct_UClass_ARotationButton_Statics; \
public: \
	DECLARE_CLASS(ARotationButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(ARotationButton)


#define FID_Marouflards_Source_Clock_RotationButton_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARotationButton(); \
	friend struct Z_Construct_UClass_ARotationButton_Statics; \
public: \
	DECLARE_CLASS(ARotationButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(ARotationButton)


#define FID_Marouflards_Source_Clock_RotationButton_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARotationButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARotationButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotationButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotationButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARotationButton(ARotationButton&&); \
	NO_API ARotationButton(const ARotationButton&); \
public:


#define FID_Marouflards_Source_Clock_RotationButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARotationButton(ARotationButton&&); \
	NO_API ARotationButton(const ARotationButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotationButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotationButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotationButton)


#define FID_Marouflards_Source_Clock_RotationButton_h_13_PROLOG
#define FID_Marouflards_Source_Clock_RotationButton_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_RotationButton_h_16_SPARSE_DATA \
	FID_Marouflards_Source_Clock_RotationButton_h_16_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_RotationButton_h_16_INCLASS \
	FID_Marouflards_Source_Clock_RotationButton_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_RotationButton_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_RotationButton_h_16_SPARSE_DATA \
	FID_Marouflards_Source_Clock_RotationButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_RotationButton_h_16_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_RotationButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class ARotationButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_RotationButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
