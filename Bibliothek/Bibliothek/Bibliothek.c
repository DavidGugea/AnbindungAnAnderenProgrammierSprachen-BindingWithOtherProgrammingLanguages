// Bibliothek.cpp : Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include "stdafx.h"
#include <stdio.h>

/*
extern "C"
{
	__declspec(dllexport) void DisplayHelloFromMyDLL()
	{
		printf("Hello DLL.\n");
	}
}
*/
// Berechnet die Fakultaet einer ganzen Zahl / Returns the factorial value of an integer
int fakultaet(int n) {
	int i;
	int ret = 1;
	for (i = 2; i <= n; i++) {
		ret *= i;
	}

	return ret;
}// Berechnet die Laenge eines Vektor im R^3 / Calculates the length of a vector in R^3
double veclen(double x, double y, double z) {
	sqrt(x*x + y * y + z * z);
}

// Bubblesort
void sortiere(int *array, int len) {
	int i, j, tmp;
	for (i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[i]) {
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
}


