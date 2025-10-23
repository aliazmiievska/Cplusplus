
#include <iostream>
#include "windows.h"
#include <cstdlib>
using namespace std;

double funcRund(int n);

int main()
{
	int n = 13;
	int k;

	cout << "Enter the size of the array:\n";
	cin >> k;
	cout << "\nIt`s your array:\n";

	double* array = new double[k];

	for (int i = 0; i < k; i++)
	{
		array[i] = funcRund(n);
		cout << array[i] << "\n";
	}

	double a;

	cout << "\nEnter some value:\n";
	cin >> a;
	cout << "\nThese are values, that are not higher, than your value:\n";

	for (int i = 0; i < k; i++)
	{
		if (array[i] <= a) cout << array[i] << "\n";
	}

	delete[] array;
	cout << endl;

	system("pause");
	return 0;
}

double funcRund(int n)
{
	double z = rand() % 20 * n - 10 * n;
	return z;
}