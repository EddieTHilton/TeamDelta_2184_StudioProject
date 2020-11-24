// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TeamDelta_2184CPP : ModuleRules
{
	public TeamDelta_2184CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
