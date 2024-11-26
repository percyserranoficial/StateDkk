// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EstadoInmovil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoInmovil() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoInmovil_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoInmovil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
	STATEDKK_API UClass* Z_Construct_UClass_UIStateMovimiento_NoRegister();
// End Cross Module References
	void AEstadoInmovil::StaticRegisterNativesAEstadoInmovil()
	{
	}
	UClass* Z_Construct_UClass_AEstadoInmovil_NoRegister()
	{
		return AEstadoInmovil::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoInmovil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoInmovil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoInmovil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoInmovil.h" },
		{ "ModuleRelativePath", "EstadoInmovil.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoInmovil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStateMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstadoInmovil, IIStateMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoInmovil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoInmovil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoInmovil_Statics::ClassParams = {
		&AEstadoInmovil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoInmovil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoInmovil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoInmovil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoInmovil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoInmovil, 2799482737);
	template<> STATEDKK_API UClass* StaticClass<AEstadoInmovil>()
	{
		return AEstadoInmovil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoInmovil(Z_Construct_UClass_AEstadoInmovil, &AEstadoInmovil::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEstadoInmovil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoInmovil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
