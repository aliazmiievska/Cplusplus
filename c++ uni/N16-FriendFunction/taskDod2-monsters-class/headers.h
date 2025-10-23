#ifndef HEADER_H
#define HEADER_H
#include <string>

class Monster {
public:
    enum class MonsterType {
        ORC,
        GOBLIN,
        SKELETON,
        OGRE,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES,
    };
private:
    MonsterType m_type;
    std::string m_name;
    int m_health;
public:

    Monster(MonsterType type, std::string name, int health);
    
    std::string getTypeString();

    void print();
};

#endif