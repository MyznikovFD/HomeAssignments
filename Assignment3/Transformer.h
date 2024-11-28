#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include "Engine.cpp"
#include "Guns.cpp"

typedef unsigned int uint;


class Transformers
{
    Engine _engine;
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;
    Guns _gun;
public:
    Transformers(Guns gun, const uint enginePower = 1, const uint& level = 1, const uint& strength = 1, const uint& range = 1, const uint& fuel = 1, const uint& ammo = 1 ):
        _engine(Engine(enginePower)), _level(level%10), _strength(strength%10), _range(range%10), _fuel(fuel%10), _ammo(ammo%10), _gun(gun)
    {};
    ~Transformers()
    {
        delete &_engine;
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
