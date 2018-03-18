// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InputManagerPrivatePCH.h"
#include "Public/InputManagerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputManagerLibrary() {}
// Cross Module References
	INPUTMANAGER_API UClass* Z_Construct_UClass_UInputManagerLibrary_NoRegister();
	INPUTMANAGER_API UClass* Z_Construct_UClass_UInputManagerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InputManager();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetActionKeyByName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAllActionKeys();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAllAxisKeys();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAxisKeyByName();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_ReBindActionKey();
	INPUTMANAGER_API UFunction* Z_Construct_UFunction_UInputManagerLibrary_ReBindAxisKey();
// End Cross Module References
	void UInputManagerLibrary::StaticRegisterNativesUInputManagerLibrary()
	{
		UClass* Class = UInputManagerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionKeyByName", (Native)&UInputManagerLibrary::execGetActionKeyByName },
			{ "GetAllActionKeys", (Native)&UInputManagerLibrary::execGetAllActionKeys },
			{ "GetAllAxisKeys", (Native)&UInputManagerLibrary::execGetAllAxisKeys },
			{ "GetAxisKeyByName", (Native)&UInputManagerLibrary::execGetAxisKeyByName },
			{ "ReBindActionKey", (Native)&UInputManagerLibrary::execReBindActionKey },
			{ "ReBindAxisKey", (Native)&UInputManagerLibrary::execReBindAxisKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetActionKeyByName()
	{
		struct InputManagerLibrary_eventGetActionKeyByName_Parms
		{
			FName ActionName;
			bool Found;
			FInputActionKeyMapping Key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetActionKeyByName_Parms, Key), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Found_SetBit = [](void* Obj){ ((InputManagerLibrary_eventGetActionKeyByName_Parms*)Obj)->Found = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Found = { UE4CodeGen_Private::EPropertyClass::Bool, "Found", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputManagerLibrary_eventGetActionKeyByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Found_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName = { UE4CodeGen_Private::EPropertyClass::Name, "ActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetActionKeyByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Found,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "GetActionKeyByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(InputManagerLibrary_eventGetActionKeyByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAllActionKeys()
	{
		struct InputManagerLibrary_eventGetAllActionKeys_Parms
		{
			TArray<FInputActionKeyMapping> Keys;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetAllActionKeys_Parms, Keys), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "GetAllActionKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(InputManagerLibrary_eventGetAllActionKeys_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAllAxisKeys()
	{
		struct InputManagerLibrary_eventGetAllAxisKeys_Parms
		{
			TArray<FInputAxisKeyMapping> Keys;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetAllAxisKeys_Parms, Keys), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "GetAllAxisKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(InputManagerLibrary_eventGetAllAxisKeys_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_GetAxisKeyByName()
	{
		struct InputManagerLibrary_eventGetAxisKeyByName_Parms
		{
			FName ActionName;
			float AxisValue;
			bool Found;
			FInputAxisKeyMapping Key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetAxisKeyByName_Parms, Key), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Found_SetBit = [](void* Obj){ ((InputManagerLibrary_eventGetAxisKeyByName_Parms*)Obj)->Found = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Found = { UE4CodeGen_Private::EPropertyClass::Bool, "Found", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputManagerLibrary_eventGetAxisKeyByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Found_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue = { UE4CodeGen_Private::EPropertyClass::Float, "AxisValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetAxisKeyByName_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName = { UE4CodeGen_Private::EPropertyClass::Name, "ActionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventGetAxisKeyByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Found,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "GetAxisKeyByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(InputManagerLibrary_eventGetAxisKeyByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_ReBindActionKey()
	{
		struct InputManagerLibrary_eventReBindActionKey_Parms
		{
			FInputActionKeyMapping NewBinding;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputManagerLibrary_eventReBindActionKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputManagerLibrary_eventReBindActionKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBinding = { UE4CodeGen_Private::EPropertyClass::Struct, "NewBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventReBindActionKey_Parms, NewBinding), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBinding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "ReBindActionKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(InputManagerLibrary_eventReBindActionKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputManagerLibrary_ReBindAxisKey()
	{
		struct InputManagerLibrary_eventReBindAxisKey_Parms
		{
			FInputAxisKeyMapping NewBinding;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputManagerLibrary_eventReBindAxisKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputManagerLibrary_eventReBindAxisKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBinding = { UE4CodeGen_Private::EPropertyClass::Struct, "NewBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputManagerLibrary_eventReBindAxisKey_Parms, NewBinding), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBinding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Helpers" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
				{ "ToolTip", "Static Functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManagerLibrary, "ReBindAxisKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(InputManagerLibrary_eventReBindAxisKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputManagerLibrary_NoRegister()
	{
		return UInputManagerLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputManagerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_InputManager,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInputManagerLibrary_GetActionKeyByName, "GetActionKeyByName" }, // 3950338427
				{ &Z_Construct_UFunction_UInputManagerLibrary_GetAllActionKeys, "GetAllActionKeys" }, // 2655340105
				{ &Z_Construct_UFunction_UInputManagerLibrary_GetAllAxisKeys, "GetAllAxisKeys" }, // 4019101130
				{ &Z_Construct_UFunction_UInputManagerLibrary_GetAxisKeyByName, "GetAxisKeyByName" }, // 2843293079
				{ &Z_Construct_UFunction_UInputManagerLibrary_ReBindActionKey, "ReBindActionKey" }, // 3011402807
				{ &Z_Construct_UFunction_UInputManagerLibrary_ReBindAxisKey, "ReBindAxisKey" }, // 2315737078
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "InputManagerLibrary.h" },
				{ "ModuleRelativePath", "Public/InputManagerLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputManagerLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputManagerLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputManagerLibrary, 192325754);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputManagerLibrary(Z_Construct_UClass_UInputManagerLibrary, &UInputManagerLibrary::StaticClass, TEXT("/Script/InputManager"), TEXT("UInputManagerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputManagerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
