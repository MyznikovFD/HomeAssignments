//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4


#include <string>
#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;

Autobots::Autobots(): Transformers(), _kindness(10), _whoop("Hurra!") {};
Autobots::Autobots(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& kindness, const std::string& whoop):
    Transformers(gun, enginePower, strength, fuel, ammo), _kindness(kindness%100), _whoop(whoop)
{};
Autobots::~Autobots() {};


//overloaded function
std::ostream& operator<<(std::ostream& oss, Autobots& tr)
{
    oss << "Information about autobot:" << "\n" << "Gun Firerate: " << tr.getGunFireRate() << "\n" << "Gun power: " << tr.getGunPower() << "\n" << "Ammo: " << tr.getAmmo() << "\n" << "Engine power: " << tr.getEnginePower() << "\n" << "Strength: " << tr.getStrength() << "\n" << "Fuel: " << tr.getFuel() << "\n" << "Kindness: " << tr.getKindness() << "\n" << "Whoop: " << tr.roar() << std::endl;
    return oss;
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
    _kindness = kindness%100;
};

std::string Autobots::roar()
{
    return (_whoop);
};

uint Autobots::getKindness()
{
    return (_kindness);
};
