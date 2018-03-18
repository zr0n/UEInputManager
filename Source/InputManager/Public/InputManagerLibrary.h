#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "InputManagerLibrary.generated.h"

UCLASS()
class UInputManagerLibrary : public UBlueprintFunctionLibrary{
	GENERATED_UCLASS_BODY()
    public:

        /** Static Functions */
        UFUNCTION(BlueprintCallable, Category = "Input Manager")
			/** Reassign an Axis */
		    static bool ReBindAxisKey(FInputAxisKeyMapping NewBinding);

        UFUNCTION(BlueprintCallable, Category = "Input Manager")
			/** Reassign an Action */
            static bool ReBindActionKey(FInputActionKeyMapping NewBinding);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
			/** Get Action Key info By Name */
            static void GetActionKeyByName(FName ActionName, bool& Found, FInputActionKeyMapping& Key);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
			/** Get Axis Input info by Name */
            static void GetAxisKeyByName(FName ActionName, float AxisValue,  bool& Found, FInputAxisKeyMapping& Key);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
			/** Get All the Action Keys Assigned */
            static void GetAllActionKeys(TArray<FInputActionKeyMapping>& Keys);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
			/** Get All the Axis Inputs Assigned */
            static void GetAllAxisKeys(TArray<FInputAxisKeyMapping>& Keys);
};
