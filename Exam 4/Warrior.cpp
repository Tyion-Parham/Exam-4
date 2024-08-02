#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string cn, std::string wep) : weapon(wep) 
{
	setClassName(cn);
}

void Warrior::attack()
{
	std::cout << ", the " << getClassName << ", swings their " << weapon;
}
