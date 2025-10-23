#include "headers.h"
#include <iostream>
#include <cmath>

void Point::print() {
	std::cout << m_a << " " << m_b << std::endl;
}

/*double Point::distanceTo(Point point) {
	return sqrt((point.m_a-m_a)*(point.m_a-m_a)+(point.m_b-m_b)*(point.m_b-m_b));
}*/

double distanceBetween(Point point1, Point point2) {
	return sqrt(pow((point1.m_a - point2.m_a), 2) + pow((point1.m_b - point2.m_b), 2));
}