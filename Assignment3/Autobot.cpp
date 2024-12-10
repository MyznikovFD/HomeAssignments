#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;

Autobots::Autobots(const uint& kindness, const std::string& whoop, Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo):
    Transformers(gun, enginePower, strength, fuel, ammo), _whoop(whoop), _kindness(kindness%100)
{};
Autobots::~Autobots() {};

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
    _kindness = kindness%100;
};

std::string Autobots::getWhoop()
{
    return (_whoop);
};

uint Autobots::getKindness()
{
    return (_kindness);
};
