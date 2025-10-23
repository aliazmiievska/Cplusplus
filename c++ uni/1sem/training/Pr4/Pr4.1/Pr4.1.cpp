#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double A[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		double a = A[i];
		if (a > 0)
		{
			cout << a << "\n";
		}
	}


	cout << endl;

	system("pause");
	return 0;
}
