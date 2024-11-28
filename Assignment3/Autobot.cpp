#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;


bool Autobots::roar()
{
    return true;
};

bool Autobots::defend()
{
    return true;
};

bool Autobots::shame()
{
    return true;
};

void Autobots::setWhoop(std::string whoop)
{
    _whoop = whoop;
};

void Autobots::setKindness(uint kindness)
{
    if (kindness <= 10)
        _kindness = kindness;
};

std::string Autobots::getWhoop()
{
    return (_whoop);
};

uint Autobots::getKindness()
{
    return (_kindness);
};
