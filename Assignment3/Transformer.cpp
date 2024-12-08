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
    _strength = strength%101;
};

void Transformers::setGun(uint power, uint fireRate)
{
    _gun = new Guns(power, fireRate); 
};

void Transformers::setEngine(uint power)
{
    _engine = new Engine(power);
};

void Transformers::setFuel(uint fuel)
{
    _fuel = fuel%101;
};

void Transformers::setAmmo(uint ammo)
{
    _ammo = ammo%101;
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
