// CPP_DLL_4.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) void testFunction() {
		cout << "Hello World !";
	}
	__declspec(dllexport) int fakultaet(int num) {
		int result = 1;
		for (int i = num; i > 0; i--) {
			result *= i;
		}

		return result;
	}
	__declspec(dllexport) double veclen(double x, double y, double z) {
		return sqrt(x * x + y * y + z * z);
	}
	__declspec(dllexport) void bubbleSort(int *arr, int len) {
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

