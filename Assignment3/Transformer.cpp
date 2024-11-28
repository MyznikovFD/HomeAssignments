#include <iostream>
#include "Transformer.h"

typedef unsigned int uint;


bool move()
{
    return true;
};

bool jump()
{
    return true;
};

bool fire()
{
    return true;
};

bool ultimate()
{
    return true;
};

bool transform()
{
    return true;
};

void Transformers::setStrength(uint strength)
{
    if (strength <= 10)
        _strength = strength;
};

void Transformers::setLevel(uint level)
{
    if (level <= 10)
        _level = level;
};

void Transformers::setRange(uint range)
{
    if (range <= 10)
        _range = range;
};

void Transformers::setFuel(uint fuel)
{
    if (fuel <= 10)
        _fuel = fuel;
};

void Transformers::setAmmo(uint ammo)
{
    if (ammo <= 10)
        _ammo = ammo;
};


uint Transformers::getStrength()
{
    return (_strength);
};

uint Transformers::getLevel()
{
    return (_level);
};

uint Transformers::getRange()
{
    return (_range);
};

uint Transformers::getFuel()
{
    return (_fuel);
};

uint Transformers::getAmmo()
{
    return (_ammo);
};
