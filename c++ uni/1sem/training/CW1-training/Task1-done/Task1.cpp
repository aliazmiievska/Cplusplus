
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, a, b, t;
	cin >> a >> b >> t;

	if ( t <= (a + b)/2 )
	{
		x = 1 + (a * t) + (a * pow(t, 2)) / 2;
	}
	if (t <= 3 * a && t > (a + b)/2 )
	{
		x = (1 - t + b * pow(t, 3)) / 3;
	}

	cout << x;

	cout << endl;

	system("pause");
	return 0;
}