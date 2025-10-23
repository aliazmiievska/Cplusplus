
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	int k = 0;
	double z, x;

	cin >> a >> b;

	for (double x = 1.1; x <= 4.1, x += 0.2;)
	{
		z = ( a - sqrt( abs( b - x )) / pow( log(a+3),2));
	}
	if (z < 0) cout << z;
	k++;

	cout << endl;

	system("pause");
	return 0;
}