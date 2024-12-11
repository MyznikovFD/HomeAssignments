#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "Engine.cpp"
#include "Guns.cpp"

typedef unsigned int uint;


class Transformers
{
    Engine* _engine;
    Guns* _gun;
    uint _strength;
    uint _fuel;
    uint _ammo;
public:
    Transformers();
    Transformers(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo);
    virtual ~Transformers();
    bool move();
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();
    void setEngine(uint power);
    void setGun(Guns* gun);
    void setStrength(uint strength);
    void setFuel(uint fuel);
    void setAmmo(uint ammo);
    uint getEnginePower();
    uint getGunFireRate();
    uint getGunPower();
    uint getStrength();
    uint getFuel();
    uint getAmmo();
};
#endif
