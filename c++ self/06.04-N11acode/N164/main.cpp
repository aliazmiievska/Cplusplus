#include <iostream>
#include "fruit.h"
#include "apple.h"
#include "banana.h"


int main()
{
	const Apple a("Red delicious", "red", 7.3);
	std::cout << a;

	const Banana b("Cavendish", "yellow");
	std::cout << b;

	return 0;
}