#include <iostream>
#include <cmath>

class Parallelepiped {
private:
    int m_sideA;
    int m_sideB;
    int m_sideC;
public:

    Parallelepiped(int a, int b, int c) : m_sideA(a), m_sideB(b), m_sideC(c) {}
    Parallelepiped(int a, int b) : Parallelepiped(a,a,b) {}
    Parallelepiped(int a) : Parallelepiped(a,a,a) {}

    int volume() {
        return m_sideA * m_sideB * m_sideC;
    }

};

int main() {
    Parallelepiped object1(3, 1, 7);
    Parallelepiped object2(4, 6);
    Parallelepiped object3(9);
    Parallelepiped object4(2, 7);
    Parallelepiped object5(5, 3, 8);

    int array[]{
        object1.volume(), object2.volume(), object3.volume(), object4.volume(), object5.volume() };

    for (const auto& element : array) {
        std::cout << element << ' ';
    }

    system("pause");
    return 0;
}
