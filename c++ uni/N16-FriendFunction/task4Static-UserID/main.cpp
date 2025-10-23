#include <iostream>
#include "headers.h"
using namespace std;


int main() {
	User u1, u2, u3;
	cout << "First user`s ID: " << u1.getID() << endl;
	cout << "Second user`s ID: " << u2.getID() << endl;
	cout << "Third user`s ID: " << u3.getID() << endl;
	return 0;
}