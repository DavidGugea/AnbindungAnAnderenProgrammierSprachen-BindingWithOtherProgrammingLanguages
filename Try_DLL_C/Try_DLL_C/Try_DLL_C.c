// Try_DLL_C.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

extern "C" {
	__declspec(dllexport) void helloWorld() {
		printf("Hello world");
	}
}
