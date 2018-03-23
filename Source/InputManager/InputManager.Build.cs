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