#include <iostream>
#include "headers.h"


int main() {

	Apartment apartment;

	apartment.set_object("Stusa", 12, 67, 1, 40);
	apartment.display();
	apartment.get_in_file();

	system("pause");
	return 0;
}