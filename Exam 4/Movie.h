#pragma once
#include "Playable.h"
#include <iostream>
class Movie :
    public Playable
{
private:
    std::string title, genre, director, plot;
    int year;

public:
    Movie() : Movie("", 0, "", "", "") {};
    Movie(std::string d, int y, std::string g, std::string t, std::string p) :
        director(d), year(y), genre(g), title(t), plot(p) {};
    virtual void play();
};

