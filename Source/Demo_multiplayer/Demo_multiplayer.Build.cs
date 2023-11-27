// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Demo_multiplayer : ModuleRules
{
	public Demo_multiplayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
