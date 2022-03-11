#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string n,int hp, int armor) : Character(hp, armor, 10), name(n)
{
    helpfulItems = makeHelpfulItems(4);
    defensiveItems = makeDefensiveItems(3);
}

const std::string& Paladin::getName()
{
    return name;
}

void Paladin::attack(Character& other)
{
    Character::attack(other);
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
