// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EstadoTrampa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoTrampa() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoTrampa_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoTrampa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
	STATEDKK_API UClass* Z_Construct_UClass_UIStateMovimiento_NoRegister();
// End Cross Module References
	void AEstadoTrampa::StaticRegisterNativesAEstadoTrampa()
	{
	}
	UClass* Z_Construct_UClass_AEstadoTrampa_NoRegister()
	{
		return AEstadoTrampa::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoTrampa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoTrampa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoTrampa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoTrampa.h" },
		{ "ModuleRelativePath", "EstadoTrampa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoTrampa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStateMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstadoTrampa, IIStateMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoTrampa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoTrampa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoTrampa_Statics::ClassParams = {
		&AEstadoTrampa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoTrampa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoTrampa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoTrampa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoTrampa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoTrampa, 2314589228);
	template<> STATEDKK_API UClass* StaticClass<AEstadoTrampa>()
	{
		return AEstadoTrampa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoTrampa(Z_Construct_UClass_AEstadoTrampa, &AEstadoTrampa::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEstadoTrampa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoTrampa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
