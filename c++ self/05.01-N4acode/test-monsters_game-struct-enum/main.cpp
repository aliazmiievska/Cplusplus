#include <iostream>
#include <string>
using namespace std;

enum class Characters {
    ORC,
    GOBLIN,
    SKELETON,
    OGRE,
    TROLL,
};

struct Monster {
    Characters character;
    string name;
    int health;
};

void printMonster(Monster aMonster);
string printCharacter(Characters character);

int main()
{
    Monster stepan = { Characters::TROLL, "Stepan", 180 };
    Monster valentyn = { Characters::OGRE, "Valentyn", 130 };

    printMonster(stepan);
    printMonster(valentyn);


    system("pause");
    return 0;
}

void printMonster(Monster aMonster) {
    cout << "This " << printCharacter(aMonster.character) << " is named " << aMonster.name << " and has " << aMonster.health << " health." << endl;
}

string printCharacter(Characters character) {
    switch (character) {
    case Characters::ORC: return "orc";
    case Characters::GOBLIN: return "goblin";
    case Characters::SKELETON: return "skeleton";
    case Characters::OGRE: return "ogre";
    case Characters::TROLL: return "troll";
    }
}