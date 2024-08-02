#pragma once
#include "Archetype.h"
class Hero
{
private:
	std::string name;
	Archetype* className;

public:
	Hero(std::string name, Archetype& cn);
	void act();
};

