#include <iostream>
using namespace std;

bool isOperation(char x);
double doCalc(int a, int b, char operation);

int main()
{
	cout << "Enter an integer: " << endl;
	int a;
	cin >> a;

	cout << "Enter a second integer: " << endl;
	int b;
	cin >> b;

	cout << "Enter one of the following: +, -, *, / or %: " << endl;
	char operation;
	cin >> operation;
	while (!isOperation(operation)) {
		cout << "\aError\nEnter one of the following: +, -, *, / or %: " << endl;
		cin >> operation;
	}

	if (isOperation) cout << a << " " << operation << " " << b << " = " << doCalc(a, b, operation) << endl;

	return 0;
}

bool isOperation(char x) {
	return x == '+' || x == '-' || x == '*' || x == '/' || x == '%';
}


double doCalc(int a, int b, char operation) {
	double result;
	switch (operation) {
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / b; break;
	case '%': result = a % b; break;
	}

	return result;
}