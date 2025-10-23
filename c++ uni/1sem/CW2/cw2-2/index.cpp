// libraries
#include <iostream>
#include "windows.h"
#include <fstream>
#include <string>
using namespace std;


// function declaring
//



int main()
{
	// main code
	//
    const int n = 10;
    string names[n] = {"Magazin1", "Magazin2", "Magazin3", "Magazin4", "Magazin5",
                       "Magazin6", "Magazin7", "Magazin8", "Magazin9", "Magazin10"};
    double costs[n] = {200, 300, 250, 180, 220, 500, 450, 400, 350, 480};
    int subs[n] = {100, 120, 90, 150, 80, 200, 180, 170, 160, 190};

    ofstream fileNames("names.txt");
    ofstream fileData("data.txt");

    if (!fileNames.is_open() || !fileData.is_open())
    {
        cout << "Could not open the file.\n";
        return 1;
    }

    for (int i=0; i<n; i++)
    {
        fileNames << names[i] << "\n";
        fileData << costs[i] << " " << subs[i] << "\n";
    }

    int max = 0;
    for (int i=1; i<n; i++) 
    {
        if (subs[i] > subs[max]) 
        {
            max = i;
        }
    }

    cout << "Most popular:\n";
    cout << "Name: " << names[max] << "\n";
    cout << "Subscriptions: " << subs[max] << "\n";

    fileNames.close();
    fileData.close();


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//