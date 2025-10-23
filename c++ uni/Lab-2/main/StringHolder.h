#ifndef STRINGHOLDER_H
#define STRINGHOLDER_H
#include <string>

class StringHolder {
protected:
    std::string m_data;
public:

    StringHolder(std::string str) {
        m_data = str;
    }

    std::string getData() {
        return m_data;
    }

};

#endif