#pragma once
#include "Archetype.h"
#include <vector>
class Mage :
    public Archetype
{
   using Archetype::Archetype;
private:
    const std::vector<std::string> spellBook = {"Fireball", "Magic Missile",
        "Chain Lightning", "Misty Step", "Power Word Kill", "Cone of Cold"};

public:
    Mage();
    std::string pickSpell();
    void castSpell(std::string spell);
    virtual void attack();
};

