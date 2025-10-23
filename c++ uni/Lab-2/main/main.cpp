#include <iostream>
#include "StringHolder.h"
#include "StringAnalyzer.h"
#include "CharArray.h"
#include "CharEditor.h"


int main() {

    StringAnalyzer analyzer("ParaLeLepipeD");
    std::cout << "String: " << analyzer.getData() << std::endl;
    std::cout << "Vowels: " << analyzer.countVowels() << std::endl;
    std::cout << "Consonants: " << analyzer.countConsonants() << std::endl;
    std::cout << "Uppercase: " << analyzer.countUpper() << std::endl;
    std::cout << "Lowercase: " << analyzer.countLower() << std::endl;

    std::cout << std::endl;

    CharEditor editor("abracadabra");
    std::cout << "Before: ";
    editor.print();
    editor.removeChar('a');
    std::cout << "After: ";
    editor.print();

    return 0;
}
