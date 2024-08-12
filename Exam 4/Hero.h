#pragma once
#include "Warrior.h"
#include "Mage.h"
class Hero
{
private:
	std::string name;
	//Archetype* className;
public:
	Archetype* className;
	Hero();
	Hero(std::string name, Archetype* cn);
	Hero operator=(Hero& hr);
	void act();
};

