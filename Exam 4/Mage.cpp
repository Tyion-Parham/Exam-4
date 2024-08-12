#include "Mage.h"
#include <iostream>
#include <ctime>

Mage::Mage()
{
	setClassName("Mage");
}

std::string Mage::pickSpell()
{
	std::string spell = spellBook[rand() % spellBook.size()];
	return spell;
}

void Mage::castSpell(std::string spell)
{
	std::cout << "cast " << spell << ".";
}

void Mage::attack()
{
	std::cout << ", the " << getClassName() << ", ";
	castSpell(pickSpell());
}