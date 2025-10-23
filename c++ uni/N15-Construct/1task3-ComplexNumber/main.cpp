#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // z^2 = (a + bi)^2 = a^2 + 2abi + (bi)^2 = a^2 - b^2 + 2abi
    Complex square() const {
        double new_r = real * real - imag * imag;
        double new_i = 2 * real * imag;
        return Complex(new_r, new_i);
    }

    Complex add(const Complex& num) const {
        return Complex(real + num.real, imag + num.imag);
    }

    void getNum() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1.add(c2);
    Complex squared = c1.square();

    std::cout << "First number: ";  c1.getNum();
    std::cout << "Second number: "; c2.getNum();
    std::cout << "Sum: "; sum.getNum();
    std::cout << "The square of the first number: "; squared.getNum();

    system("pause");
    return 0;
}