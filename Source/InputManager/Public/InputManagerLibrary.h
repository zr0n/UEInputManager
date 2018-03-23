/*
* This file is part of the UEInputManager distribution (https://github.com/zr0n/UEInputManager or https://zr0n.github.io/blog/inputmanager/).
* Copyright (c) 2018 Luiz Fernando.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
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
