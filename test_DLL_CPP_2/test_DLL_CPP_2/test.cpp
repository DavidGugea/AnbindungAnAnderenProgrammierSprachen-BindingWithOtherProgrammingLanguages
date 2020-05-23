#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" {
	___declspec(dllexport) void test() {
		printf("Test.\n");
	}
}