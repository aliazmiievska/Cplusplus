#include "headers.h"
#include <iostream>


// Vector

Vector Vector::operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

Vector Vector::operator-(const Vector& other) const {
    return Vector(x - other.x, y - other.y);
}

void Vector::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}


// LabeledVector

void LabeledVector::setLabel(const std::string& newLabel) {
    label = newLabel;
}

void LabeledVector::print() const {
    std::cout << label << ": ";
    Vector::print();
}