
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A[32];
	for (int i = 0; i < 32; i++) {
		A[i] = rand() - 2000;
		cout << A[i] << "\n";
	}

	int min = INT_MAX;
	for (int i = 0; i < 32; i++) {
		if (A[i] > 0 && A[i] < min) {
			min = A[i];
		}
	}

	cout << "\nMin value: " << min << "\n";

	system("pause");
	return 0;
}