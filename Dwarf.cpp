#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string n,int hp, int armor) : name(n), Character(hp, armor, 2)
{
    
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}