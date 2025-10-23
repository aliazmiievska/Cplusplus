#include <iostream>
#include "headers.h"
#include <string>


Apple::Apple(double w, std::string c) : weight(w), color(c) {};

double Apple::allWeight = 0.0;

double Apple::addWeight() {
	allWeight += weight;
	return allWeight;
}

void Apple::displayAllWeight() {
	std::cout << allWeight << std::endl;
}