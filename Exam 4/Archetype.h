#pragma once
#include <string>
class Archetype
{
private:
	std::string className;

public:
	Archetype();
	Archetype(std::string n);
	std::string getClassName();
	void setClassName(std::string n);
	virtual void attack() = 0;
};

