#include <iostream>
#include "headers.h"


int main() {
    Human Ivan("Ivanenko", "Ivan", "Ivanovych");
    Human Anna("Dovbenko", "Anna", "Vasylivna");
    Human Iryna("Mykytko", "Iryna", "Stepanivna");

    Human::findPerson("Mykytko");
    Human::findPerson(2);
    Human::findPerson(6);
    Human::findPerson("Petryshyn");

    return 0;
}
