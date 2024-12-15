#include <iostream>
#include "Decepticon.h"

typedef unsigned int uint;

Decepticons::Decepticons(): Transformers(), _trickery(10), _cruelty(10) {};
Decepticons::Decepticons(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& trickery, const uint& cruelty):
    Transformers(gun, enginePower, strength, fuel, ammo), _trickery(trickery%100), _cruelty(cruelty%100)
{};
Decepticons::~Decepticons() {};

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
    _cruelty = cruelty%100;
};

uint Decepticons::getTrickery()
{
    return (_trickery);
};

uint Decepticons::getCruelty()
{
    return (_cruelty);
};
