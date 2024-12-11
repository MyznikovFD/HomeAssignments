#include <string>
#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;

Autobots::Autobots() {};
Autobots::Autobots(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& kindness = 99, const std::string& whoop = "Hurra!"):
    Transformers(gun, enginePower, strength, fuel, ammo), _kindness(kindness%100), _whoop(whoop)
{};
Autobots::~Autobots() {};

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
