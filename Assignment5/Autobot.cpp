//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to explore using of virtual methods and vectors



#include <string>
#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;

Autobots::Autobots(): Transformers(), _kindness(10), _whoop("Hurra!") {};
Autobots::Autobots(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& kindness, const std::string& whoop):
    Transformers(gun, enginePower, strength, fuel, ammo), _kindness(kindness%100), _whoop(whoop)
{};
Autobots::~Autobots() {};




bool Autobots::fire()
{
    std::cout << "fire;  Autobots" << std::endl;
    return true;
};

bool Autobots::ultimate()
{
    std::cout << "ultimate;  Autobots" << std::endl;
    return true;
};

bool Autobots::transform()
{
    std::cout << "transform;  Autobots" << std::endl;
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
