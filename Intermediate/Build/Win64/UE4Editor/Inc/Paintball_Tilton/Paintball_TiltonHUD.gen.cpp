// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Paintball_TiltonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintball_TiltonHUD() {}
// Cross Module References
	PAINTBALL_TILTON_API UClass* Z_Construct_UClass_APaintball_TiltonHUD_NoRegister();
	PAINTBALL_TILTON_API UClass* Z_Construct_UClass_APaintball_TiltonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Paintball_Tilton();
// End Cross Module References
	void APaintball_TiltonHUD::StaticRegisterNativesAPaintball_TiltonHUD()
	{
	}
	UClass* Z_Construct_UClass_APaintball_TiltonHUD_NoRegister()
	{
		return APaintball_TiltonHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintball_TiltonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Paintball_Tilton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Paintball_TiltonHUD.h" },
				{ "ModuleRelativePath", "Paintball_TiltonHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintball_TiltonHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintball_TiltonHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintball_TiltonHUD, 835874198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintball_TiltonHUD(Z_Construct_UClass_APaintball_TiltonHUD, &APaintball_TiltonHUD::StaticClass, TEXT("/Script/Paintball_Tilton"), TEXT("APaintball_TiltonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintball_TiltonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
