//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to explore using of virtual methods and vectors

#include <iostream>
#include "Decepticon.h"

typedef unsigned int uint;

Decepticons::Decepticons(): Transformers(), _trickery(10), _cruelty(10) {};
Decepticons::Decepticons(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& trickery, const uint& cruelty):
    Transformers(gun, enginePower, strength, fuel, ammo), _trickery(trickery%100), _cruelty(cruelty%100)
{};
Decepticons::~Decepticons() {};



bool Decepticons::fire()
{
    std::cout << "fire;  Decepticons" << std::endl;
    return true;
};

bool Decepticons::ultimate()
{
    std::cout << "ultimate;  Decepticons" << std::endl;
    return true;
};

bool Decepticons::transform()
{
    std::cout << "transform;  Decepticons" << std::endl;
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
