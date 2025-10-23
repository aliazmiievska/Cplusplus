#include "headers.h"
#include <iostream>


Monster::Monster(MonsterType type, std::string name, int health) :
    m_type(type), m_name(name), m_health(health) {};

std::string Monster::getTypeString() {
    switch (m_type) {
    case MonsterType::ORC: return "orc";
    case MonsterType::GOBLIN: return "goblin";
    case MonsterType::SKELETON: return "skeleton";
    case MonsterType::OGRE: return "ogre";
    case MonsterType::TROLL: return "troll";
    case MonsterType::VAMPIRE: return "vampire";
    case MonsterType::ZOMBIE: return "zombie";
    }
}

void Monster::print() {
    std::cout << m_name << " is the " << getTypeString() << " that has " << m_health << " health points" << std::endl;
}