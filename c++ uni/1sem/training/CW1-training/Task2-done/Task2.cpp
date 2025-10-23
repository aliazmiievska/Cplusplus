
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y;
	int a;
	cin >> a;

	double max = (cos(0.1 - a)) / sqrt(0.1);
	double min = max;

	for (x = 0.1; x <= 6.5; x += 0.32)
	{
		y = (cos(x - a)) / sqrt(x);

		if (y > max) max = y;
		if (y < min) min = y;
	}

	cout << max - min << endl;

	system("pause");
	return 0;
}