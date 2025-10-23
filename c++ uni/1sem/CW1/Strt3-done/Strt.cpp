
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int A[32];
	

	cout << "All values: \n\n";
	for (int i = 0; i < 32; i++) {
		A[i] = rand() - 2000;
		cout << A[i] << "\n";
	}

	int posCount = 0;
	int posSum = 0;

	for (int i = 0; i < 32; i++) {
		if (A[i] > 0)
		{
			posSum += A[i];
			posCount++;
		}
	}

	int posAverage = posSum / posCount;

	cout << "\n\nPositive & positive average values: \n\n";

	for (int i = 0; i < 32; i++) {

		if (A[i] > 0)
		{
			cout << A[i] << "\n";
		}
		
		if (A[i] < 0)
		{
			A[i] = posAverage;
			cout << A[i] << "\n";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}