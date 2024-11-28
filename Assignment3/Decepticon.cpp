#include <iostream>
#include "Decepticon.h"

typedef unsigned int uint;


bool Decepticons::roar()
{
    return true;
};

bool Decepticons::attack()
{
    return true;
};

bool Decepticons::mock()
{
    return true;
};

void Decepticons::setTrickery(uint trickery)
{
     if (trickery <= 10)
        _trickery = trickery;
};

void Decepticons::setCruelty(uint cruelty)
{
    if (cruelty <= 10)
       _cruelty = cruelty;
};

uint Decepticons::getTrickery()
{
    return (_trickery);
};

uint Decepticons::getCruelty()
{
    return (_cruelty);
};
