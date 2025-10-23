#include "headers.h"
#include <iostream>
#include <cmath>


int Vector::vectorLength() const {
	return sqrt(m_a * m_a + m_b * m_b);
}

Vector Vector::vectorMultiply(int num) {
	return Vector(m_a * num, m_b * num);
}