//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4

#include <iostream>
#include "Transformer.h"
#include "Decepticon.h"

typedef unsigned int uint;

Decepticons::Decepticons(): Transformers(), _trickery(10), _cruelty(10) {};
Decepticons::Decepticons(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& trickery, const uint& cruelty):
    Transformers(gun, enginePower, strength, fuel, ammo), _trickery(trickery%100), _cruelty(cruelty%100)
{};
Decepticons::~Decepticons() {};


//overloaded function
std::ostream& operator<<(std::ostream& oss, Decepticons& tr)
{
    oss << "Information about decepticon:" << "\n" << "Gun Firerate: " << tr.getGunFireRate() << "\n" << "Gun power: " << tr.getGunPower() << "\n" << "Ammo: " << tr.getAmmo() << "\n" << "Engine power: " << tr.getEnginePower() << "\n" << "Strength: " << tr.getStrength() << "\n" << "Fuel: " << tr.getFuel() << "\n" << "Trickery: " << tr.getTrickery() << "\n" << "Cruelty: " << tr.getCruelty() << std::endl;
    return oss;
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
