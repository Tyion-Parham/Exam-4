#pragma once
#include <vector>
#include <iostream>
#include "Playable.h"
class Record :
    public Playable
{
private:
    std::string artist;
    std::vector<std::string> tracks;

public:
    Record() : Record("", {}) {};
    Record(std::string a, std::vector<std::string> t) : artist(a), tracks(t) {};
    virtual void play();
};

