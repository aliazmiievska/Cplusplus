#include <iostream>
using namespace std;

struct Advertising {
    int shownAdvert;
    double clickPercent;
    int moneyPerClick;
};

void inputStruct(Advertising& input);
int income(Advertising income);

int main()
{
    Advertising day1{ 0, 0, 0 };
    inputStruct(day1);
    cout << "Income is: " << income(day1) << "$" << endl;

    cout << endl;
    system("pause");
    return 0;
}

void inputStruct(Advertising& input) {
    cout << "Enter the amount of shown adverts: ";
    cin >> input.shownAdvert;
    cout << "Enter the percent of people, who clicked on advert (example: 0.4): ";
    cin >> input.clickPercent;
    cout << "Enter the amount of cost per one click (in $): ";
    cin >> input.moneyPerClick;
}

int income(Advertising income) {
    return income.clickPercent * income.moneyPerClick * income.shownAdvert;
}