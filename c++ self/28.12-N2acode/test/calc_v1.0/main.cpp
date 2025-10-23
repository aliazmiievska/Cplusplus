#include <iostream>
using namespace std;

bool isOperation(char x);
double doCalc(double a, double b, char operation);

int main()
{
	cout << "Enter a double value: " << endl;
	double a;
	cin >> a;

	cout << "Enter a second double value: " << endl;
	double b;
	cin >> b;

	cout << "Enter one of the following: +, -, *, or / : " << endl;
	char operation;
	cin >> operation;
	isOperation(operation);
	while (!isOperation) {
		cout << "It`s not one of the following. Enter one of the following: +, -, *, or / : " << endl;
		cin >> operation;
	}

	if (isOperation) cout << a << operation << b << " = " << doCalc(a, b, operation) << endl;

	return 0;
}

bool isOperation(char x) {
	return x == '+' || x == '-' || x == '*' || x == '/';
}


double doCalc(double a, double b, char operation) {
	double result;

	if (operation == '+') result = a + b;
	if (operation == '-') result = a - b;
	if (operation == '*') result = a * b;
	if (operation == '/') result = a / b;

	return result;
}