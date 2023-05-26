#pragma once

#ifdef KF_PLATFORM_WINDOWS
	#ifdef KF_BUILD_DLL
		#define KF_API __declspec(dllexport)
	#else
		#define KF_API __declspec(dllimport)
	#endif
#else
	#error KaitekinaFune only supports windows
#endif
