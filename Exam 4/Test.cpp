#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"
#include <ctime>
#include <iostream>



int main()
{
	/* */
	srand(time(0));
	std::string magename = "Azmodious";
	Mage* mage = new Mage();
	Warrior* warrior = new Warrior();
	Hero* party = new Hero[2];
	Hero magic(magename, mage);
	party[0] = magic;
	party[1] = *(new Hero("Gar Seeker", warrior));

	for (int i = 0; i < 2; i++)
	{
		party[i].act();
	}
	

	//playab
}