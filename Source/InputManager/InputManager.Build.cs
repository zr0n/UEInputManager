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