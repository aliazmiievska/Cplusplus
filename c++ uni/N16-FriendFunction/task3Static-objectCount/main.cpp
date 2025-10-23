#include <iostream>
#include "headers.h"
using namespace std;


int main() {
	cout << "Created objects: " << CounterObject::getCount() << endl;
	CounterObject obj1, obj2;
	cout << "Created objects: " << CounterObject::getCount() << endl;
	{
		CounterObject obj3;
		cout << "Created objects: " << CounterObject::getCount() << endl;
	}
	cout << "Created objects: " << CounterObject::getCount() << endl;
	return 0;
}
