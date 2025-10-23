// libraries
#include <iostream>
#include "windows.h"
using namespace std;


// function declaring
//
void input(int& x, int& y);
bool is(int x1, int y1, int x2, int y2);
void result(bool isT);


int main()
{
	// main code
	//
    int x1, y1, x2, y2;
    input(x1, y1);
    input(x2, y2);
    bool isT = is(x1, y1, x2, y2);
    result(isT);


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//
void input(int& x, int& y)
{
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;
}

bool is(int x1, int y1, int x2, int y2)
{
    int d1 = x1*x1 + y1*y1;
    int d2 = x2*x2 + y2*y2;
    int d3 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    return (d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1);
}   

void result(bool isT)
{
    if (isT) 
    {
        cout << "The points form a right triangle together with the origin.\n";
    }
    else 
    {
        cout << "The points do not form a right triangle together with the origin.\n";
    }
}