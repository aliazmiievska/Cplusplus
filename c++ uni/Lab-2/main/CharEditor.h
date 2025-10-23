#ifndef CHAREDITOR_H
#define CHAREDITOR_H
#include <cstring>

class CharEditor : public CharArray {
public:

    CharEditor(const char* input) : CharArray(input) {}

    void removeChar(char target) {
        int newSize = 0;
        for (int i = 0; i < m_size; i++) {
            if (m_arr[i] != target) newSize++;
        }

        char* newArr = new char[newSize];
        int j = 0;
        for (int i = 0; i < m_size; i++) {
            if (m_arr[i] != target) newArr[j++] = m_arr[i];
        }

        delete[] m_arr;
        m_arr = newArr;
        m_size = newSize;
    }

};

#endif