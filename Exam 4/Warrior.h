#pragma once
#include "Archetype.h"
class Warrior :
    public Archetype
{
    using Archetype::Archetype;
private:
    std::string weapon;

public:
    Warrior(std::string cn, std::string wep);
    virtual void attack();
};

