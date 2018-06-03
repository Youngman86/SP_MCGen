// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCGEN_MCGenCharacter_generated_h
#error "MCGenCharacter.generated.h already included, missing '#pragma once' in MCGenCharacter.h"
#endif
#define MCGEN_MCGenCharacter_generated_h

#define MCGen_Source_MCGen_MCGenCharacter_h_14_RPC_WRAPPERS
#define MCGen_Source_MCGen_MCGenCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MCGen_Source_MCGen_MCGenCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCGenCharacter(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenCharacter(); \
public: \
	DECLARE_CLASS(AMCGenCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMCGenCharacter(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenCharacter(); \
public: \
	DECLARE_CLASS(AMCGenCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMCGenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCGenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenCharacter(AMCGenCharacter&&); \
	NO_API AMCGenCharacter(const AMCGenCharacter&); \
public:


#define MCGen_Source_MCGen_MCGenCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenCharacter(AMCGenCharacter&&); \
	NO_API AMCGenCharacter(const AMCGenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCGenCharacter)


#define MCGen_Source_MCGen_MCGenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMCGenCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMCGenCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMCGenCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMCGenCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMCGenCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMCGenCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMCGenCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMCGenCharacter, L_MotionController); }


#define MCGen_Source_MCGen_MCGenCharacter_h_11_PROLOG
#define MCGen_Source_MCGen_MCGenCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenCharacter_h_14_RPC_WRAPPERS \
	MCGen_Source_MCGen_MCGenCharacter_h_14_INCLASS \
	MCGen_Source_MCGen_MCGenCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCGen_Source_MCGen_MCGenCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCGen_Source_MCGen_MCGenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
