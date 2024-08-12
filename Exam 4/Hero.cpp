#include "Hero.h"
#include <iostream>

Hero::Hero(){}

Hero::Hero(std::string n, Archetype* cn) : name(n), className(cn) {}

Hero Hero::operator=(Hero& hr)
{
	Hero temphero(name, className);
	return temphero;
}

void Hero::act()
{
	std::cout << name << " ";
	className->attack();
}