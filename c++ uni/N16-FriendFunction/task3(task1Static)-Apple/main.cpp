#include <iostream>
#include "headers.h"


int main() {


    Apple apple1(50, "yellow"); apple1.displayAllWeight();
    Apple apple2(35, "red");
    Apple apple3(45, "green");

    apple1.addWeight(); apple2.addWeight(); apple3.addWeight();

    apple1.displayAllWeight();

    return 0;
}
