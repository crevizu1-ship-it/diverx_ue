namespace UnrealBuildTool.Rules
{
	public class ContactGloveEditor : ModuleRules
	{
		public ContactGloveEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bEnableExceptions = true;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"AnimGraph",
					"BlueprintGraph",
					"ContactGlovePlugin"
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"UnrealEd",
					"AnimGraphRuntime",
					"PropertyEditor",
					"Slate",
					"SlateCore"
				}
			);
		}
	}
}
