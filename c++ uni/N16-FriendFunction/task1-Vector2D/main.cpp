#include <iostream>
#include <cmath>

class Vector2D {
private:
    double x, y;

public:
    Vector2D(double x = 0, double y = 0) : x(x), y(y) {}

    double length() const {
        return std::sqrt(x * x + y * y);
    }

    Vector2D operator*(double scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    friend double angleWithOx(const Vector2D& v);
};

double angleWithOx(const Vector2D& v) {
    return std::atan2(v.y, v.x);
}

int main() {
    Vector2D v(3, 4);
    std::cout << "Vector: ";
    v.print();
    std::cout << "Length: " << v.length() << std::endl;

    Vector2D scaledV = v * 2;
    std::cout << "Scaled Vector: ";
    scaledV.print();

    std::cout << "Angle with OX (radians): " << angleWithOx(v) << std::endl;
    std::cout << "Angle with OX (degrees): " << angleWithOx(v) * 180 / M_PI << std::endl;

    return 0;
}
