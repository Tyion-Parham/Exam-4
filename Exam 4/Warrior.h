#pragma once
#include "Archetype.h"
class Warrior :
    public Archetype
{
    using Archetype::Archetype;
private:
    std::string weapon;

public:
    Warrior();
    virtual void attack();
};

