#include <iostream>

class Fractions {
private:
	int m_numerator;
	int m_denominator;
public:

	Fractions(int numerator, int denominator): m_numerator(numerator), m_denominator(denominator) {}

	double multiply(Fractions secondNum) {
		return (static_cast<double>(m_numerator) * secondNum.m_numerator) / (m_denominator * secondNum.m_denominator);
	};
};

int main()
{
	std::cout << "Enter the first fraction:\n";
	int a; int b;
	std::cin >> a >> b;
	Fractions firstNumber(a, b);

	std::cout << "Enter the second fraction:\n";
	int c; int d;
	std::cin >> c >> d;
	Fractions secondNumber(a, b);

	std::cout << "The result of multiplication: " << firstNumber.multiply(secondNumber) << std::endl;

	system("pause");
	return 0;
}