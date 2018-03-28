/* 
 * This file is part of the UEInputManager distribution (https://github.com/zr0n/UEInputManager or https://zr0n.github.io/blog/inputmanager/).
 * Copyright (c) 2018 Luiz Fernando.
 */
using UnrealBuildTool;
using System.IO;
 
public class InputManager : ModuleRules
{
    public InputManager(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateIncludePaths.AddRange(new string[] { "InputManager/Private" });
        PublicIncludePaths.AddRange(new string[] { "InputManager/Public" });
 
        PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject", 
				"Engine",
                "InputCore",
                "RHI"
        });
    }
}