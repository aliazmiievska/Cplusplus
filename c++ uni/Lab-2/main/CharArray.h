#ifndef CHARARRAY_H
#define CHARARRAY_H
#include <cstring>

class CharArray {
protected:
    char* m_arr;
    int m_size;
public:

    CharArray(const char* input) {
        m_size = 0;
        while (input[m_size] != '\0') m_size++;
        m_arr = new char[m_size];
        for (int i = 0; i < m_size; i++) {
            m_arr[i] = input[i];
        }
    }

    ~CharArray() {
        delete[] m_arr;
    }

    void print() {
        for (int i = 0; i < m_size; i++) {
            std::cout << m_arr[i];
        }
        std::cout << std::endl;
    }

    int getSize() {
        return m_size;
    }

    char getCharAt(int index) {
        if (index >= 0 && index < m_size)
            return m_arr[index];
        return '\0';
    }

};

#endif