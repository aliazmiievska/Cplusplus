#include <iostream>
#include "headers.h"


int main() {
    Point point1(3, 4);
    Point point2(0, 8);

    std::cout << distanceBetween(point1, point2) << std::endl;

    return 0;
}
