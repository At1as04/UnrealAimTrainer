// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AimTrainer : ModuleRules
{
	public AimTrainer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
