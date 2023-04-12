// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGearBeltComp;
#ifdef CLOCK_GearBeltComp_generated_h
#error "GearBeltComp.generated.h already included, missing '#pragma once' in GearBeltComp.h"
#endif
#define CLOCK_GearBeltComp_generated_h

#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_SPARSE_DATA
#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLinkedGear); \
	DECLARE_FUNCTION(execGetLinkedGear);


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLinkedGear); \
	DECLARE_FUNCTION(execGetLinkedGear);


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGearBeltComp(); \
	friend struct Z_Construct_UClass_AGearBeltComp_Statics; \
public: \
	DECLARE_CLASS(AGearBeltComp, AGear, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGearBeltComp)


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGearBeltComp(); \
	friend struct Z_Construct_UClass_AGearBeltComp_Statics; \
public: \
	DECLARE_CLASS(AGearBeltComp, AGear, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGearBeltComp)


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGearBeltComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGearBeltComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGearBeltComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGearBeltComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGearBeltComp(AGearBeltComp&&); \
	NO_API AGearBeltComp(const AGearBeltComp&); \
public:


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGearBeltComp(AGearBeltComp&&); \
	NO_API AGearBeltComp(const AGearBeltComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGearBeltComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGearBeltComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGearBeltComp)


#define FID_Marouflards_Source_Clock_GearBeltComp_h_12_PROLOG
#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_INCLASS \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_GearBeltComp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GearBeltComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class AGearBeltComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_GearBeltComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
