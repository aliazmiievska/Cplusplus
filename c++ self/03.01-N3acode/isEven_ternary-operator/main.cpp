#include <iostream>
using namespace std;

bool isEven(int x);

int main()
{
    cout << "Is a number even? \nEnter the number: ";
    int x;
    cin >> x;

    /*if (isEven(x)) {
        cout << "Your number is even\n";
    }
    else {
        cout << "\aYour number is not even\n";
    }*/


    (isEven(x)) ? cout << "Your number is even\n" : cout << "Your number is not even\n";

    system("pause");
    return 0;
}

bool isEven(int x) {
    return x % 2 == 0;
}