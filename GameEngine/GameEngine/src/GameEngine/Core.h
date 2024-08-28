#pragma once


#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GameEngine_API __declspec(dllexport)
	#else
		#define GameEngine_API __declspec(dllimport)
	#endif
#else
	#error This Game Engine only for Windows!
#endif