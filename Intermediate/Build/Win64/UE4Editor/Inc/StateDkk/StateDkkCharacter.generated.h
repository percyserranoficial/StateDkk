// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATEDKK_StateDkkCharacter_generated_h
#error "StateDkkCharacter.generated.h already included, missing '#pragma once' in StateDkkCharacter.h"
#endif
#define STATEDKK_StateDkkCharacter_generated_h

#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_SPARSE_DATA
#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_RPC_WRAPPERS
#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStateDkkCharacter(); \
	friend struct Z_Construct_UClass_AStateDkkCharacter_Statics; \
public: \
	DECLARE_CLASS(AStateDkkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateDkk"), NO_API) \
	DECLARE_SERIALIZER(AStateDkkCharacter)


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStateDkkCharacter(); \
	friend struct Z_Construct_UClass_AStateDkkCharacter_Statics; \
public: \
	DECLARE_CLASS(AStateDkkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateDkk"), NO_API) \
	DECLARE_SERIALIZER(AStateDkkCharacter)


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStateDkkCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStateDkkCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStateDkkCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStateDkkCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStateDkkCharacter(AStateDkkCharacter&&); \
	NO_API AStateDkkCharacter(const AStateDkkCharacter&); \
public:


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStateDkkCharacter(AStateDkkCharacter&&); \
	NO_API AStateDkkCharacter(const AStateDkkCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStateDkkCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStateDkkCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStateDkkCharacter)


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AStateDkkCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AStateDkkCharacter, CameraBoom); }


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_9_PROLOG
#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_SPARSE_DATA \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_RPC_WRAPPERS \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_INCLASS \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateDkk_Source_StateDkk_StateDkkCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_SPARSE_DATA \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_INCLASS_NO_PURE_DECLS \
	StateDkk_Source_StateDkk_StateDkkCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATEDKK_API UClass* StaticClass<class AStateDkkCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StateDkk_Source_StateDkk_StateDkkCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
