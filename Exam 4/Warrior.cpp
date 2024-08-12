#include "Warrior.h"
#include <iostream>

Warrior::Warrior()
{
	weapon = "Halbert";
	setClassName("Warrior");
}

void Warrior::attack()
{
	std::cout << ", the " << getClassName() << ", swings their " << weapon;
}
