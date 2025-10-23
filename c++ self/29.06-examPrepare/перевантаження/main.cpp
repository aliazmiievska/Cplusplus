#include <iostream>
using namespace std;

class Complex {
private:
    double m_real;
    double m_imag;
public:

    Complex() {};
    Complex(double real, double imag) : m_real(real), m_imag(imag) {};
    friend Complex operator+(Complex a, Complex b);
    friend Complex operator*(Complex a, Complex b);
    friend ostream operator<<(ostream out, Complex a);

};

Complex operator+(Complex a, Complex b) {
    Complex c;
    c.m_real = a.m_real + b.m_real;
    c.m_imag = a.m_imag + b.m_imag;
    return c;
}

Complex operator*(Complex a, Complex b) {
    Complex c;
    c.m_real = a.m_real * b.m_real;
    c.m_imag = a.m_imag * b.m_imag;
    return c;
}

ostream operator<<(ostream out, Complex a) {
    out << a.m_real << " + " << a.m_imag << "i" << endl;
}

int main() {
   

    return 0;
}
