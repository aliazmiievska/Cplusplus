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
    ifstream input("input.txt");
    string result = "";
    string line;

    if (!input.is_open()) {
        cout << "Could not open the file" << endl;
        return 1;
    }

    while (getline(input, line)) {
        if (!line.empty()) {
            result += line.back();
        }
    }

    input.close();

    cout << "Result: " << result << endl;


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//