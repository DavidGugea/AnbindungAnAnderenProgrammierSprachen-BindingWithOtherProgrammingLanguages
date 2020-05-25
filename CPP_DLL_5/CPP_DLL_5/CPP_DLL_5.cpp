// CPP_DLL_5.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) void testFunction() {
		cout << "Hello World !" << endl;
	}
	__declspec(dllexport) int fakultaet(int n) {
		int result = 1;
		for (int i = 1; i < n; i++) {
			result *= i;
		}

		return result;
	}
	__declspec(dllexport) double veclen(double x, double y, double z) {
		return sqrt(x*x + y * y + z * z);
	}
	__declspec(dllexport) void sortiere(int *arr, int len) {
		int i, j, tmp;
		for (i = 0; i < len; i++) {
			for (j = 0; j < i; j++) {
				if (arr[j] > arr[i]) {
					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
}
