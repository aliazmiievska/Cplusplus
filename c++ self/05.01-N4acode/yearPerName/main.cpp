#include <iostream>
#include <string>
using namespace std;

double yearsPerLetter(int age, string fullName);

int main()
{

    cout << "Enter your full name: ";
    string fullName;
    getline(cin, fullName);

    cout << "Enter your age: ";
    int age;
    cin >> age;

    cout << "You've lived " << yearsPerLetter(age, fullName) << " years for each letter in your name." << endl;

    system("pause");
    return 0;
}

double yearsPerLetter(int age, string fullName) {
    int fullNameLength = static_cast<int>(fullName.length()) - 1; // "1" - space between name and surname
    return static_cast<double>(fullNameLength) / age;
}