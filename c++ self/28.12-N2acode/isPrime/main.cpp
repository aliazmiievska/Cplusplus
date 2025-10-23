#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a positive whole number:" << endl;
    double y;
    cin >> y;

    while (y < 0 || y - static_cast<int>(y) != 0) {
        cout << "\aThis number is negative or not whole. Enter a positive whole number:" << endl;
        cin >> y;
    }

    int x = y;
    bool isPrime = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = false;
        }
    }

    if (isPrime) {
        cout << "Your number is prime" << endl;
    }
    else {
        cout << "Your number is not prime" << endl;
    }

    system("pause");
    return 0;
}
