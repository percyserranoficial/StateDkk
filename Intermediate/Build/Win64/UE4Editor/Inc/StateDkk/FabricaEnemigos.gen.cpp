// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/FabricaEnemigos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemigos() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AFabricaEnemigos_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AFabricaEnemigos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AFabricaEnemigos::StaticRegisterNativesAFabricaEnemigos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEnemigos_NoRegister()
	{
		return AFabricaEnemigos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEnemigos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEnemigos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEnemigos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaEnemigos.h" },
		{ "ModuleRelativePath", "FabricaEnemigos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEnemigos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemigos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemigos_Statics::ClassParams = {
		&AFabricaEnemigos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEnemigos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEnemigos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEnemigos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEnemigos, 1873650644);
	template<> STATEDKK_API UClass* StaticClass<AFabricaEnemigos>()
	{
		return AFabricaEnemigos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEnemigos(Z_Construct_UClass_AFabricaEnemigos, &AFabricaEnemigos::StaticClass, TEXT("/Script/StateDkk"), TEXT("AFabricaEnemigos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemigos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
