#ifndef HEADER_H
#define HEADER_H


class Vector {
private:
    double x, y;
public:

    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    Vector operator+(const Vector& other) const;

    Vector operator-(const Vector& other) const;

    void print() const;

};

class LabeledVector : public Vector {
private:
    std::string label;
public:

    LabeledVector(double x, double y, std::string label) : Vector(x, y), label(label) {}

    void setLabel(const std::string& newLabel);

    void print() const;

};

#endif