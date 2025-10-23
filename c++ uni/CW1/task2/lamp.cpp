#include "lamp.h"
#include <iostream>

int Lamp::arraySize = 0;

double totalPower(Lamp* array) {
    double totalPower = 0;
    for (int iii = 0; iii < Lamp::arraySize; ++iii) {
        if (array[iii].m_isOn) totalPower += array[iii].m_power;
    }
    return totalPower;
}