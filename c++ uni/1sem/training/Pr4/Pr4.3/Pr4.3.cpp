#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int A[1000];
	int k = 0;
	int d = 1;

	cout << "к-сть змінних: "; cin >> n; cout << "\n";

	for (int i=0; i<n; i++)
	{
		cin >> A[i];
		if (A[i] > 5) {
			k++;
			if (k == 2) d = d * A[i];
			if (k == 3) d = d * A[i];
		}
	}

	cout << d;

	cout << endl;

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
