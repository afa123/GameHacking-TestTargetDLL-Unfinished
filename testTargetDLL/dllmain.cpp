﻿// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"



DWORD WINAPI mainThread(LPVOID param)
{
	uintptr_t moduleBase = (uintptr_t)GetModuleHandleA(NULL);
	

	while (true)
	{
		if (GetAsyncKeyState(0x32) & 1)
			

		if (GetAsyncKeyState(0x33) & 1)
			
	}

	FreeLibraryAndExitThread((HMODULE)param, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, mainThread, hModule, 0, 0);
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

