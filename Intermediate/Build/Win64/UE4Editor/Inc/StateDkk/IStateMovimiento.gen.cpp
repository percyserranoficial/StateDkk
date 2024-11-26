// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/IStateMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStateMovimiento() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_UIStateMovimiento_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_UIStateMovimiento();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void UIStateMovimiento::StaticRegisterNativesUIStateMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UIStateMovimiento_NoRegister()
	{
		return UIStateMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UIStateMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIStateMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIStateMovimiento_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IStateMovimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIStateMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStateMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIStateMovimiento_Statics::ClassParams = {
		&UIStateMovimiento::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIStateMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIStateMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIStateMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIStateMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIStateMovimiento, 2760794226);
	template<> STATEDKK_API UClass* StaticClass<UIStateMovimiento>()
	{
		return UIStateMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIStateMovimiento(Z_Construct_UClass_UIStateMovimiento, &UIStateMovimiento::StaticClass, TEXT("/Script/StateDkk"), TEXT("UIStateMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIStateMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
