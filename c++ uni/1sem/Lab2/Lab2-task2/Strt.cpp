
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

double func(double x);

int main()
{

	for (double x = 0; x < 1.1; x += 0.1)
	{
		double z = func(x);
		cout << "if x = " << x << ", result will be: " << z << "\n";
	}

	cout << endl;

	system("pause");
	return 0;
}

double func(double x)
{
	int k = 0;
	double sum = 0;
	double z;

	do
	{
		z = pow(-1, k) * pow(x, 2 * k + 3) / ((2 * k + 1) * (2 * k + 3));
		sum += z;
		k++;
	} while (fabs(z) >= 0.0001);

	return sum;
}