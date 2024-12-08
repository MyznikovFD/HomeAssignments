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
    Transformers(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo):
        _strength(strength%101), _fuel(fuel%101), _ammo(ammo%101)
    {
        _gun = gun;
        _engine = new Engine(enginePower%101); 
    };
    ~Transformers()
    {
        delete &_engine;
    };
    bool move();
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();
    void setEngine(uint engine);
    void setGun(uint power, uint fireRate);
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
