// CPP_DLL_3.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) int fakultaet(int n) {
		int i;
		int ret = 1;
		for (i = 2; i <= n; i++) {
			ret *= i;
		}

		return ret;
	}
	__declspec(dllexport) double veclen(double x, double y, double z) {
		return x * x + y * y + z * z;
	}
	__declspec(dllexport) void sortiere(int *arr, int len) {
		int i, j, temp;
		for (i = 0; i < len; i++) {
			for (j = 0; j < i; j++) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
