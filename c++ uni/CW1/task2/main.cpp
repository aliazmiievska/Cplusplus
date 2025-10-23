#include <iostream>
#include "lamp.h"


int main() {
    Lamp array[4];

    array[0].init(60, true);
    array[1].init(40, false);
    array[2].init(75, true);
    array[3].init(100, false);

    std::cout << "Total power of the lamps turned on: " << totalPower(array) << " W" << std::endl;

    return 0;
}
