// libraries
#include <iostream>
#include "windows.h"
#include <string>
using namespace std;


// function declaring
//
struct student
{
    string surname;
    string name;
    int group;
    double avg;
};


int main()
{
	// main code
	//
    const int n = 5;
    student students[n] = 
    {
        {"Kostenko", "Ivan", 1, 4.5},
        {"Shevchenko", "Mykola", 3, 3.8},
        {"Dovbush", "Anna", 2, 4.0},
        {"Koval", "Mykyta", 3, 5.0},
        {"Bondar", "Alla", 1, 4.3}
    };

    cout << "Students with grades '4' and '5':\n";
    for (int i=0; i<n; i++) 
    {
        if (students[i].avg >= 4.0) 
        {
            cout << "Surname: " << students[i].surname
                << ", Group: " << students[i].group << "\n";
        }
    }


	// ending
	cout << endl;
	system("pause");
	return 0;
}
