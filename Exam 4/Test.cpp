#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"
#include "Record.h"
#include "Movie.h"
#include "Game.h"
#include <ctime>
#include <iostream>



int main()
{
	srand(time(0));
	Mage* mage = new Mage();
	Warrior* warrior = new Warrior();
	Hero* party[2];
	party[0] = new Hero("Azmodious", mage);
	party[1] = new Hero("Gar Seeker", warrior);

	for (int i = 0; i < 2; i++)
	{
		party[i]->act();
		std::cout << "\n";
	}
	
	std::cout << "\n";

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Playable * entertain[3];
	entertain[0] = new Movie("Michael Bay", 2007, "sci-fi action", "Transformers",
		"Alien robots, wicked fights, and of most import... EXPLOSIONS!!!");
	entertain[1] = new Record("Tame Impala",
		{ "One More Year", "Instant Destiny", "Borderline", "Posthumous", "Breathe Deeper"});
	entertain[2] = new Game("Monopoly", "board", 6, "compete to see who's the best capitalist", 180);

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n";
		entertain[i]->play();
		std::cout << "\n";
	}
}