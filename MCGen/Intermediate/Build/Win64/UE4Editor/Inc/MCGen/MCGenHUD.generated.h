// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCGEN_MCGenHUD_generated_h
#error "MCGenHUD.generated.h already included, missing '#pragma once' in MCGenHUD.h"
#endif
#define MCGEN_MCGenHUD_generated_h

#define MCGen_Source_MCGen_MCGenHUD_h_12_RPC_WRAPPERS
#define MCGen_Source_MCGen_MCGenHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MCGen_Source_MCGen_MCGenHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCGenHUD(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenHUD(); \
public: \
	DECLARE_CLASS(AMCGenHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMCGenHUD(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenHUD(); \
public: \
	DECLARE_CLASS(AMCGenHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMCGenHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCGenHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenHUD(AMCGenHUD&&); \
	NO_API AMCGenHUD(const AMCGenHUD&); \
public:


#define MCGen_Source_MCGen_MCGenHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenHUD(AMCGenHUD&&); \
	NO_API AMCGenHUD(const AMCGenHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCGenHUD)


#define MCGen_Source_MCGen_MCGenHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define MCGen_Source_MCGen_MCGenHUD_h_9_PROLOG
#define MCGen_Source_MCGen_MCGenHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenHUD_h_12_RPC_WRAPPERS \
	MCGen_Source_MCGen_MCGenHUD_h_12_INCLASS \
	MCGen_Source_MCGen_MCGenHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCGen_Source_MCGen_MCGenHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenHUD_h_12_INCLASS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCGen_Source_MCGen_MCGenHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
