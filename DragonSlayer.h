#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string n, int hp, int armor);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
