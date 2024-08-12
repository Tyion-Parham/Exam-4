#pragma once
#include"Playable.h"
#include <iostream>
class Game :
	public Playable
{
private:
	std::string name, genre, winCon;
	int numPlayers, playtime;

public:
	Game() : Game("", "", 0, "", 0) {};
	Game(std::string n, std::string g, int nP, std::string wC, int pT) :
		name(n), genre(g), numPlayers(nP), winCon(wC), playtime(pT) {};
	virtual void play();
};

