//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment3

#include <ostream>
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

Transformers::Transformers(): _gun(NULL),_strength(0), _fuel(0), _ammo(0)
{
    _engine = new Engine();
};

Transformers::Transformers(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo):
    _gun(gun),_strength(strength%100), _fuel(fuel%100), _ammo(ammo)
{
    Transformers::setEngine(enginePower%100);
};
Transformers::~Transformers()
{
    delete _engine;
};

bool Transformers::operator>(Transformers* other)
{
    return (this->getStrength() > other->getStrength());
};

bool Transformers::operator<(Transformers* other)
{
    return (this->getStrength() < other->getStrength());
};


bool Transformers::move()
{
    return true;
};

bool Transformers::jump()
{
    return true;
};

bool Transformers::fire()
{
    return true;
};

bool Transformers::ultimate()
{
    return true;
};

bool Transformers::transform()
{
    return true;
};


void Transformers::setStrength(uint strength)
{
    _strength = strength%100;
};

void Transformers::setGun(Guns* gun)
{
    _gun = gun;
};

void Transformers::setEngine(uint power)
{
    _engine = new Engine(power);
};

void Transformers::setFuel(uint fuel)
{
    _fuel = fuel%100;
};

void Transformers::setAmmo(uint ammo)
{
    _ammo = ammo;
};



uint Transformers::getStrength()
{
    return (_strength);
};

uint Transformers::getGunPower()
{
    return _gun->getPower();
};

uint Transformers::getGunFireRate()
{
    return _gun->getFireRate();
};

uint Transformers::getEnginePower()
{
    return _engine->getPower();
};

uint Transformers::getFuel()
{
    return (_fuel);
};

uint Transformers::getAmmo()
{
    return (_ammo);
};

std::ostream& operator<<(std::ostream& oss, Transformers& tr)
{
    oss << "Information about transformer:" << "\n" << "Gun Firerate: " << tr.getGunFireRate() << "\n" << "Gun power: " << tr.getGunPower() << "\n" << "Ammo: " << tr.getAmmo() << "\n" << "Engine power: " << tr.getEnginePower() << "\n" << "Strength: " << tr.getStrength() << "\n" << "Fuel: " << tr.getFuel() << std::endl;
    return oss;
};
