
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

double func1(double x);
double func2(double x);
double func3(double x);

int main()
{

	for (double x = 3; x < 6.2; x += 0.2)
	{
		double z;
		if (x < 4) z = func1(x);
		if (x >= 4 && x < 5) z = func2(x);
		if (x >= 5) z = func3(x);

		cout << "if x = " << x << ", result will be: " << z << "\n";
	}

	cout << endl;

	system("pause");
	return 0;
}

double func1(double x)
{
	double z = (log(x + sin(x))) / (log(3));
	return z;
}

double func2(double x)
{
	double z = log10(exp(x) + 4);
	return z;
}

double func3(double x)
{
	double z = log(log10(x));
	return z;
}

