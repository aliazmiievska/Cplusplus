#include <iostream>
using namespace std;
#include "getInteger.h"

int main ()
{
	int x = getInteger();
	int y = getInteger();

	//int x = 2;
	//int y = 5;

	cout << x << " + " << y << " is " << x + y << '\n';

	return 0;	
}