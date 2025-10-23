#include <iostream>
#include "headers.h"
#include <string>

class Animal
{
protected:
    std::string m_name;
    std::string m_speak;

    Animal(std::string name, std::string speak)
        : m_name(name), m_speak(speak) {};

public:
    std::string getName() { return m_name; }
    std::string speak() { return m_speak; }
};

class Cat : public Animal
{
public:
    Cat(std::string name)
        : Animal(name, "Meow") {};

    virtual const char* speak() { return "meow"; }
};

class Dog : public Animal
{
public:
    Dog(std::string name)
        : Animal(name, "Woof")
    {
    }

    virtual const char* speak() { return "woof"; }
};

int main()
{
    Cat cat("Matros");
    std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';

    Dog dog("Barsik");
    std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

    Animal* pAnimal = &cat;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    pAnimal = &dog;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    return 0;
}