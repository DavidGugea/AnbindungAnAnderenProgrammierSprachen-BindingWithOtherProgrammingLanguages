// Dll1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) void testFunc() {
		cout << "Hello World !" << endl;
	}
}

