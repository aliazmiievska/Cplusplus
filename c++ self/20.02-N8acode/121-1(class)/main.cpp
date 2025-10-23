#include <iostream>

class Numbers {
public:
    int a;
    int b;

    void set(int x, int y) {
        a = x; b = y;
    }

    void print() {
        std::cout << "Numbers(" << a << ", " << b << ")\n";
    }
};

int main() {
    Numbers n1;
    n1.set(3, 3);

    Numbers n2{ 4, 4 };

    n1.print();
    n2.print();

    return 0;

    system("pause");
    return 0;
}
