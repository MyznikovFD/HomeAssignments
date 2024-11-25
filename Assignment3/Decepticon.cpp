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

void Decepticons::setWeapon(std::string weapon)
{
    _weapon = weapon;
};

void Decepticons::setCruelty(uint cruelty)
{
    _cruelty = cruelty;
};

std::string Decepticons::getWeapon()
{
    return (_weapon);
};

uint Decepticons::getCruelty()
{
    return (_cruelty);
};
