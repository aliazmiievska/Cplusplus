#include <iostream>
#include "headers.h"


int main() {
    Power p;
    p.read();
    p.display();
    std::cout << "Power: " << p.power() << std::endl;

    Time time1(2, 30);
    time1.display();
    std::cout << "Total minutes: " << time1.minutes() << std::endl;

    Time time2(3.56);
    time2.display();
    std::cout << "Total minutes: " << time2.minutes() << std::endl;

    return 0;
}
