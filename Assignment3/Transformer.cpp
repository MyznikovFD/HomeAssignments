#include <iostream>
#include "Transformer.h"

typedef unsigned int uint;

Transformers::Transformers(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo):
    _gun(gun) ,_strength(strength%100), _fuel(fuel%100), _ammo(ammo)
{
    Transformers::setEngine(enginePower%100);
};
Transformers::~Transformers()
{
    delete _engine;
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

void Transformers::setGun(uint power, uint fireRate)
{
    Guns _gun(power, fireRate);
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
