#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "Engine.cpp"
#include "Guns.cpp"

typedef unsigned int uint;


class Transformers
{
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;
    Guns _gun;
    Engine _engine;
public:
    Transformers(Guns gun, const uint& level = 1, const uint& strength = 1, const uint& range = 1, const uint& fuel = 1, const uint& ammo = 1, const uint enginePower = 1 ):
        _level(level), _strength(strength), _range(range), _fuel(fuel), _ammo(ammo), _gun(gun), _engine(Engine(enginePower))
    {};
    ~Transformers()
    {
        delete &_gun;
    };
    bool move();
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();
    void setStrength(uint strength);
    void setLevel(uint level);
    void setRange(uint range);
    void setFuel(uint fuel);
    void setAmmo(uint ammo);
    uint getStrength();
    uint getLevel();
    uint getRange();
    uint getFuel();
    uint getAmmo();
};
#endif
