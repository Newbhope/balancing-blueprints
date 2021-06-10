// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BalancingBlueprints : ModuleRules
{
	public BalancingBlueprints(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
