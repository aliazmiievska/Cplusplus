#include "point.h"
#include <iostream>
#include <cmath>


void Point::display() const {
	std::cout << "Coordinates are: " << m_x << ", " << m_y << ".\n";
}

double distance(const Point& a, const Point& b) {
	return sqrt( pow((a.m_x - b.m_x), 2) + pow((a.m_y - b.m_y), 2) );
}
