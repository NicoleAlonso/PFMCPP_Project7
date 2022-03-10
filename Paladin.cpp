#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string n,int hp, int armor) : name(n), Character(hp, armor, 2)
{
    
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
