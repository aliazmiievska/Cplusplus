
#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;

	cout << "Put in values a,b \n";
	cin >> a >> b;

	if (a == -3)
	{
		cout << "Put in other value of a";
		cin >> a;
	}
	
	int k = 0;

	for (double x = 1.1; x <= 4.1; x += 0.2)
	{
		double z = (a - sqrt(abs(b - x))) / pow((log(a + 3)), 2);
		if (z < 0) {
			cout << z << "\n";
			k++;
		}
	}

	cout << "\n" << k;

	cout << endl;

	system("pause");
	return 0;
}