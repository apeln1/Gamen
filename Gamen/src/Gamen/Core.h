#pragma once


#ifdef GM_PLATFORM_WINDOWS

	#ifdef GM_BUILD_DLL
		#define GAMEN_API __declspec(dllexport)

	#else
		#define GAMEN_API __declspec(dllimport)
	
	#endif
#else
	#error Gamen only supports Windows!

#endif // GM_PLATFORM_WINDOWS

