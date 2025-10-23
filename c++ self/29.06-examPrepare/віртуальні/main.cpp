#include <iostream>
using namespace std;

class Animal {
public:

    Animal() {};

    virtual void makeSound() {
        cout << "Unknown sound\n";
    }

};

class Cat: public Animal {
public:

    Cat() {};

    virtual void makeSound() {
        cout << "Meow\n";
    }

};

class Dog: public Animal {
public:

    Dog() {};

    virtual void makeSound() {
        cout << "Woof\n";
    }

};

int main() {
    Dog dog;
    Cat cat;

    Animal& animal1 = dog;
    Animal& animal2 = cat;

    animal1.makeSound();
    animal2.makeSound();


    return 0;
}
