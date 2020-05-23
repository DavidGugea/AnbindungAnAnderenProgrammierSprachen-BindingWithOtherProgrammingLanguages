// DLL_CPP_2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	__declspec(dllexport) void testFunction() {
		cout << "This is a test function !" << endl;
	}
	__declspec(dllexport) int factorial(int number) {
		int result = 1;
		for (int i = number; i > 1; i--) {
			result *= i;
		}

		return result;
	}
	__declspec(dllexport) double self_pow(double baseNumber, double powerNumber) {
		double result = 1;
		for (int i = 0; i < powerNumber; i++) {
			result *= baseNumber;
		}

		return result;
	}
	__declspec(dllexport) void sayHi() {
		cout << "Hello David" << endl;
	}
	__declspec(dllexport) void helloWorld() {
		cout << "Hello World" << endl;
	}
}
