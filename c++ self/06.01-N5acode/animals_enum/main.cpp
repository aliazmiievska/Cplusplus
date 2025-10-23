#include <iostream>
#include <string>
using namespace std;

enum class Animal {
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

string getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);

int main()
{
	printNumberOfLegs(Animal::CAT);
	printNumberOfLegs(Animal::CHICKEN);

	system("pause");
	return 0;
}

string getAnimalName(Animal animal) {
	switch (animal) {
	case Animal::PIG: return "pig";
	case Animal::CHICKEN: return "chicken";
	case Animal::GOAT: return "goat";
	case Animal::CAT: return "cat";
	case Animal::DOG: return "dog";
	case Animal::OSTRICH: return "ostrich";
	default: return "\aError";
	}
}

void printNumberOfLegs(Animal animal) {
	switch (animal) {
	case Animal::PIG: cout << "Pig has 4 legs\n"; break;
	case Animal::CHICKEN: cout << "Chicken has 2 legs\n"; break;
	case Animal::GOAT: cout << "Goat has 4 legs\n"; break;
	case Animal::CAT: cout << "Cat has 4 legs\n"; break;
	case Animal::DOG: cout << "Dog has 4 legs\n"; break;
	case Animal::OSTRICH: cout << "Ostrich has 0 legs\n"; break;
	default: cout << "\aError\n";
	}
}