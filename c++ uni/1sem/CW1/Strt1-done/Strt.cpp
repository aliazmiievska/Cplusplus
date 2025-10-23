
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double d;
	int A, b, a;
	cin >> A >> b >> a;
	double e = 2.71;

	if ( A > 3 * b )
	{
		d = pow(e, sqrt(A + b)) + b * sqrt(a);
	}

	if ( A < a )
	{
		d = pow(e, sqrt(A + b)) + a * log(b);
	}

	cout << "\n" << d;

	cout << endl;

	system("pause");
	return 0;
}