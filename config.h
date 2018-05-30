#pragma once

namespace config
{
	// Form lookup cache + distant tree LOD alpha update form cache
	// equivalent to SSE fixes
	extern bool patchFormCaching;

	// Replace BSReadWriteLock implementation
	extern bool patchBSReadWriteLock;

	// Replace Memory Manager
	extern bool patchMemoryManager;

	// patch maxstdio to 2048 (default 512)
	// see https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/setmaxstdio
	// this fixes the false save corruption bug 
	extern bool patchMaxStdio;

	// fixes bug with taa + dof disabled breaking save game screenshots and quicksaves
	extern bool patchSaveScreenshot;

	// Ports from LE bug fixes mod
	extern bool patchDoublePerkApply;
	extern bool patchSlowTimeCameraMovement;
	extern bool patchVerticalLookSensitivity;

	// decouple waterflow timer from timescale
	extern bool patchWaterflowTimer;
	extern float waterflowTimescale;
	// fix blocky reflections on tree LODs
	extern bool patchTreeReflections;
	// snow sparkle 
	extern bool patchSnowSparkle;
	// save sound categories that aren't in the base game to SKSE cosave
	extern bool patchSaveAddedSoundCategories;

	// chargen precache disable
	extern bool patchPrecacheKiller;

	bool LoadConfig(const std::string& path);
}