#include "headers.h"
#include <iostream>
#include <cmath>


// Power

void Power::init(double f, int s) {
    first = f;
    second = s;
}

void Power::read() {
    std::cout << "Enter first number: ";
    while (!(std::cin >> first)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid input. Enter first number: ";
    }

    std::cout << "Enter second number: ";
    while (!(std::cin >> second)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid input. Enter second number: ";
    }
}

void Power::display() {
    std::cout << "First: " << first << " Second: " << second << std::endl;
}

double Power::power() {
    return std::pow(first, second);
}

// Time

Time::Time(int f, int s) {
    first = f;
    second = s;
}

Time::Time(double hour) {
    first = static_cast<int>(hour);
    second = (hour - static_cast<int>(hour)) * 100;
}

void Time::display() {
    std::cout << "Hours: " << first << " Minutes: " << second << std::endl;
}

int Time::minutes() {
    return first * 60 + second;
}