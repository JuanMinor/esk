
/* 
	Provide support for DLL export/import on inclusion of DLL
*/

#ifndef CORE_CORE_H

#define CORE_CORE_H

#ifdef ESK_WINDOWS_PLATFORM

#ifdef ESK_DLL_BUILD

#define ESK_DLL __declspec(dllexport)

#else 

#define ESK_DLL __declspec(dllimport)

#endif

#else 

#error ESK only supports Windows platform for now.

#endif

#endif
