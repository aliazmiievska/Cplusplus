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
    ofstream out("output.txt");
    string line;

    if (!input.is_open() || !out.is_open()) {
        cout << "Could not open the file" << endl;
        return 1;
    }

    while (getline(input, line)) {
        auto pos = line.find("abc");
        while (pos != string::npos) {
            line.erase(pos, 3);
            pos = line.find("abc");
        }
        out << line << endl;
    }

    input.close();
    out.close();


	cout << endl;
	system("pause");
	return 0;
}


// function body
//