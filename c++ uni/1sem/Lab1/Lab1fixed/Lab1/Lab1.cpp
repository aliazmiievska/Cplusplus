
#include <iostream>
#include "windows.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/* Завдання 1 */

	//1.

	float x;
	float z;

	cout << "1.1) Розв'язати вираз (pow(x, 2) + 4) / (pow(sin(z), 2) + (x / 2)) \n";

	cout << "Введіть x:";
	cin >> x;
	cout << "\n";
	cout << "Введіть z:";
	cin >> z;
	cout << "\n";

	const float n1 = (pow(x, 2) + 4) / (pow(sin(z), 2) + (x / 2));


	cout << "Результат виразу (pow(x, 2) + 4) / (pow(sin(z), 2) + (x / 2)): " << n1 <<"\n\n";

	//2.

	float x2;
	float y2;
	float z2;

	cout << "1.2) Розв'язати вираз sin(pow(x2, 2) / 4) + (exp(-z2) / abs(x2 + y2)) \n\n";

	cout << "Введіть x: ";
	cin >> x2;
	cout << "\n";
	cout << "Введіть y: ";
	cin >> y2;
	cout << "\n";
	cout << "Введіть z: ";
	cin >> z2;
	cout << "\n";

	const float n2 = sin(pow(x2, 2) / 4) + (exp(-z2) / abs(x2 + y2));


	cout << "\nРезультат виразу sin(pow(x2, 2) / 4) + (exp(-z2) / abs(x2 + y2)) " << n2 << "\n";



	/* Завдання 2 */

	float x3;

	cout << "\n2. Розв'язати вираз 4 * pow((x - 3), 6) - pow((x - 3), 3) + 3: \n";

	cout << "Введіть x:";
	cin >> x3;
	cout << "\n";

	const float n3 = 4 * pow((x3 - 3), 6) - pow((x3 - 3), 3) + 3;


	cout << "\nРезультат виразу 4 * pow((x - 3), 6) - pow((x - 3), 3) + 3:" << n3 << "\n";



	/* Завдання 3 */

	float x4;
	float a = rand();
	float b = rand();

	cout << "3. Введіть x: \n";
	cin >> x4;
	cout << "\n";


	if (x4 >= 0 && x4 < 5 )
	{
		cout << "cos(x)=" << cos(x4) << "\n";
	}

	if (x4 == 5 && a*x4-b > 0)
	{
		cout << "cos(x)=" << pow((sqrt(a * x4 - b)), -1) << "\n";
	}

	if (x4 > 5 && x4 < 6)
	{
		cout << "(b*pow(x,2))+(3*x)-2=" << (b * pow(x4, 2)) + (3 * x4) - 2 << "\n";
	}



	cout << endl;
	system("pause");
	return 0;
}