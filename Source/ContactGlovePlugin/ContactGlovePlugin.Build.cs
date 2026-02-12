using UnrealBuildTool;

public class ContactGlovePlugin : ModuleRules
{
	public ContactGlovePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnableExceptions = true;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"OSC",
				"AnimGraphRuntime",
				"EnhancedInput",
				"InputDevice",
				"InputCore",
				"ApplicationCore"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore"
			}
		);
	}
}
