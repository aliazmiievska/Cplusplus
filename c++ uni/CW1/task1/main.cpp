#include <iostream>
#include "point.h"


int main() {
    Point point1(3, 5);
    Point point2(4.5, -2);

    point1.display();
    point2.display();

    std::cout << "Distance is: " << distance(point1, point2) << ".\n";

    return 0;
}
