#include <iostream>

class Ball {
    std::string m_color;
    double m_radius;

public:
    Ball(std::string color, double radius = 20.0) {
        m_color = color; m_radius = radius;
    }
    Ball(double radius = 20.0, std::string color = "red") {
        m_color = color; m_radius = radius;
    }

    void print() {
        std::cout << "color: " << m_color << ", " << "radius: " << m_radius << "\n";
    }
};

int main()
{
    Ball def;
    def.print();

    Ball black("black");
    black.print();

    Ball thirty(30.0);
    thirty.print();

    Ball blackThirty("black", 30.0);
    blackThirty.print();

    system("pause");
    return 0;
}