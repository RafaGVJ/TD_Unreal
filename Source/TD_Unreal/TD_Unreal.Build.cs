// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TD_Unreal : ModuleRules
{
	public TD_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TD_Unreal",
			"TD_Unreal/Variant_Strategy",
			"TD_Unreal/Variant_Strategy/UI",
			"TD_Unreal/Variant_TwinStick",
			"TD_Unreal/Variant_TwinStick/AI",
			"TD_Unreal/Variant_TwinStick/Gameplay",
			"TD_Unreal/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
