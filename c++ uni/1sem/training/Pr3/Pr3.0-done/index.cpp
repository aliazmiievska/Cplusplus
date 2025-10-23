
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*double array[1000];
	int arraySize;
	cin >> arraySize;

	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand();
		cout << array[i] << "\n";
	}*/

	double array[] = { 3.2, 5, 6.5, 0, 3, 1, -2, 66, -5, 0, 2, 5 };

	cout << "Positive elements: ";

	for ( int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		if ( array[i] > 0 )
		{
			cout << array[i] << " ";
		}
	}

	cout << "\nNegative elements: ";

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		if (array[i] < 0)
		{
			cout << array[i] << " ";
		}
	}

	cout << "\nNegative elements: ";

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		if (array[i] < 0)
		{
			cout << array[i] << " ";
		}
	}

	cout << "\nNumbers of \"0\" elements: ";

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		if (array[i] == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}