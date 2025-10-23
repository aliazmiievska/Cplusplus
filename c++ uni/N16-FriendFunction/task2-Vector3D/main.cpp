#include <iostream>
#include <cmath>

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    double length() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    friend double dotProduct(const Vector3D& v1, const Vector3D& v2);

    friend Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2);
};

double dotProduct(const Vector3D& v1, const Vector3D& v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2) {
    return Vector3D(
        v1.y * v2.z - v1.z * v2.y,
        v1.z * v2.x - v1.x * v2.z,
        v1.x * v2.y - v1.y * v2.x
    );
}

int main() {
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    std::cout << "Vector 1: ";
    v1.print();
    std::cout << "Vector 2: ";
    v2.print();

    std::cout << "Length of Vector 1: " << v1.length() << std::endl;

    Vector3D scaledV = v1 * 2;
    std::cout << "Scaled Vector 1: ";
    scaledV.print();

    std::cout << "Dot Product: " << dotProduct(v1, v2) << std::endl;

    Vector3D crossV = crossProduct(v1, v2);
    std::cout << "Cross Product: ";
    crossV.print();

    return 0;
}
