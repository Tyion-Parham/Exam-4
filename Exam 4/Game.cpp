#include "Game.h"

void Game::play()
{
	std::cout << name << ", a " << genre << " game for up to " << numPlayers
		<< " players, where players try to" << winCon << "\nEach game Takes about " << playtime << " minutes.\n";
}