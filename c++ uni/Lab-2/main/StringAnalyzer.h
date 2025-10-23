#ifndef STRINGANALYZER_H
#define STRINGANALYZER_H
#include <string>

bool isVowel(char ch);
bool isAlpha(char ch);
bool isUpper(char ch);
bool isLower(char ch);

class StringAnalyzer : public StringHolder {
public:

    StringAnalyzer(std::string str) : StringHolder(str) {}

    int countVowels() {
        int count = 0;
        for (int i = 0; i < m_data.length(); i++) {
            if (isVowel(m_data[i])) count++;
        }
        return count;
    }

    int countConsonants() {
        int count = 0;
        for (int i = 0; i < m_data.length(); i++) {
            if (isAlpha(m_data[i]) && !isVowel(m_data[i])) count++;
        }
        return count;
    }

    int countUpper() {
        int count = 0;
        for (int i = 0; i < m_data.length(); i++) {
            if (isUpper(m_data[i])) count++;
        }
        return count;
    }

    int countLower() {
        int count = 0;
        for (int i = 0; i < m_data.length(); i++) {
            if (isLower(m_data[i])) count++;
        }
        return count;
    }

};

bool isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') ch += 32;
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool isAlpha(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isUpper(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch) {
    return ch >= 'a' && ch <= 'z';
}

#endif