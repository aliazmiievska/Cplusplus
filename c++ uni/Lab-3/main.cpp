#include <iostream>
#include "polynom.h"


int main() {
    Polynom p1;
    std::cin >> p1;
    Polynom p2;
    std::cin >> p2;

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    Polynom p3 = p1 - p2;
    std::cout << "p1 - p2 = " << p3 << std::endl;

    p3 *= 2;
    std::cout << "p3 * 2 = " << p3 << std::endl;

    std::cout << "p1 == p2: " << (p1 == p2) << std::endl;
    std::cout << "p1 < p2: " << (p1 < p2) << std::endl;

    return 0;
}
