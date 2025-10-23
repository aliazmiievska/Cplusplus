#include <iostream>
#include <string>
#include "headers.h"


int main() {
    Vector v1(3, 4), v2(1, 2);
    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;

    std::cout << "Vector 1: "; v1.print();
    std::cout << "Vector 2: "; v2.print();
    std::cout << "Sum: "; v3.print();
    std::cout << "Difference: "; v4.print();

    LabeledVector lv(5, 6, "Speed");
    lv.print();

    return 0;
}
