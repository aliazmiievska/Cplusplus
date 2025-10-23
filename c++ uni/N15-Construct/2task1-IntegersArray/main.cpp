#include <iostream>
#include <cmath>
#include <cassert>

class IntegersArray {
private:
    int* m_array;
    int m_size;
public:

    IntegersArray(int size) : m_size(size) {
        m_array = new int[m_size];
    };

    ~IntegersArray() {
        delete[] m_array;
    }

    void set_element(int index, int value) {
        assert(index >= 0 && index < m_size && "Index is not valid");
        m_array[index + 1] = value;
    }

    void get_element(int index) {
        assert(index >= 0 && index < m_size && "Index is not valid");
        std::cout << m_array[index + 1] << std::endl;
    }

};

int main() {
    IntegersArray array(5);

    array.set_element(3, 2);
    array.get_element(3);

    system("pause");
    return 0;
}
