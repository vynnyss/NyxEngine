#pragma once

#ifdef NX_PLATFORM_WINDOWS
	#ifdef NX_BUILD_DLL
		#define NYXENGINE_API __declspec(dllexport)
	#else
		#define NYXENGINE_API __declspec(dllimport)
	#endif
#else
	#error NyxEngine only support Windows!
#endif
