// DLL_CPP_APP.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) void TestFunction() {
		cout << "Hello World !" << endl;
	}
	__declspec(dllexport) void SayHi() {
		for (int i = 0; i < 3; i++) {
			cout << i << endl;
		}
	}
	__declspec(dllexport) int add2(int num) {
		int result = num + 2;
		return result;
	}
}