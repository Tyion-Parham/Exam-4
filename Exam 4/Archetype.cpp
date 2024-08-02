#include "Archetype.h"
Archetype::Archetype() : Archetype("") {}
Archetype::Archetype(std::string n) :
	className(n) {}

std::string Archetype::getClassName()
{
	return className;
}
void Archetype::setClassName(std::string n)
{
	className = n;
}