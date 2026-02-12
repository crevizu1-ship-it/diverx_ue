
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class ContactGloveEditor : ModuleRules
	{
		public ContactGloveEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bEnableExceptions = true;
			
			//OptimizeCode = CodeOptimization.Never;
			PublicIncludePaths.AddRange(
				new string[] {
					// ... add public include paths required here ...
				}
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"ContactGloveEditor/Private",
					// IncludePath,
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					// ... add other public dependencies that you statically link with here ...
					"Engine",
					"Core",
					"CoreUObject",
					"PropertyEditor",
					"Slate",
					"SlateCore",
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"UnrealEd",
					"BlueprintGraph",
					"AnimGraph",
					"AnimGraphRuntime", 
					"ContactGlovePlugin"
					
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);
		}
	}
}