// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATEDKK_IStateMovimiento_generated_h
#error "IStateMovimiento.generated.h already included, missing '#pragma once' in IStateMovimiento.h"
#endif
#define STATEDKK_IStateMovimiento_generated_h

#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_SPARSE_DATA
#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_RPC_WRAPPERS
#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEDKK_API UIStateMovimiento(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStateMovimiento) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEDKK_API, UIStateMovimiento); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStateMovimiento); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATEDKK_API UIStateMovimiento(UIStateMovimiento&&); \
	STATEDKK_API UIStateMovimiento(const UIStateMovimiento&); \
public:


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEDKK_API UIStateMovimiento(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATEDKK_API UIStateMovimiento(UIStateMovimiento&&); \
	STATEDKK_API UIStateMovimiento(const UIStateMovimiento&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEDKK_API, UIStateMovimiento); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStateMovimiento); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStateMovimiento)


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIStateMovimiento(); \
	friend struct Z_Construct_UClass_UIStateMovimiento_Statics; \
public: \
	DECLARE_CLASS(UIStateMovimiento, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StateDkk"), STATEDKK_API) \
	DECLARE_SERIALIZER(UIStateMovimiento)


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_GENERATED_UINTERFACE_BODY() \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_GENERATED_UINTERFACE_BODY() \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIStateMovimiento() {} \
public: \
	typedef UIStateMovimiento UClassType; \
	typedef IIStateMovimiento ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StateDkk_Source_StateDkk_IStateMovimiento_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIStateMovimiento() {} \
public: \
	typedef UIStateMovimiento UClassType; \
	typedef IIStateMovimiento ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StateDkk_Source_StateDkk_IStateMovimiento_h_10_PROLOG
#define StateDkk_Source_StateDkk_IStateMovimiento_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_SPARSE_DATA \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_RPC_WRAPPERS \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateDkk_Source_StateDkk_IStateMovimiento_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_SPARSE_DATA \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StateDkk_Source_StateDkk_IStateMovimiento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATEDKK_API UClass* StaticClass<class UIStateMovimiento>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StateDkk_Source_StateDkk_IStateMovimiento_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
