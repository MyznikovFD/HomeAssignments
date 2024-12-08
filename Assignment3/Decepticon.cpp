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
    _trickery = trickery%10;
};

void Decepticons::setCruelty(uint cruelty)
{
    _cruelty = cruelty%10;
};

uint Decepticons::getTrickery()
{
    return (_trickery);
};

uint Decepticons::getCruelty()
{
    return (_cruelty);
};
