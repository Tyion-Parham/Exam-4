#include "Hero.h"
#include <iostream>

Hero::Hero(std::string n, Archetype& cn) : name(n)
{
	cn.setClassName(cn.getClassName());
}

void Hero::act()
{
	std::cout << name << " ";
	className->attack();
}