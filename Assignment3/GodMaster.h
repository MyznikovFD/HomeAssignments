#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class GodMasters: public Transformers
{
public:
    GodMasters(
    Guns gun, const uint& enginePower, const uint& level, const uint& strength, const uint& range, const uint& fuel, const uint& ammo, const uint& speed = 5, const uint& solidity = 5 ):
        Transformers(gun, enginePower, level, strength, range, fuel, ammo)
    {
        _speed = speed;
        _solidity = solidity;
    };
    ~GodMasters() {};
    bool toFight();
    void setPilot(bool havingPilot);
    void setHavingBracelets(bool havingBracelets);
    bool getHavingBracelets();
    bool getHavingPilot();
    void setSpeed(uint a);
    void setSolidity(uint a);
    uint getSpeed();
    uint getSolidity();
private:
    bool _havingPilot;
    bool _havingBracelets;
    uint _speed;
    uint _solidity;

};
#endif
