#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class GodMasters: public Transformers
{
public:
    GodMasters();
    GodMasters(const uint& strength, const uint& fuel, const uint& ammo, Guns* gun, const uint& enginePower = 90, const bool& havePilot = false, const bool& haveBracelets = false, const uint& solidity = 99);
    ~GodMasters();
    bool toFight();
    void setPilot(bool havePilot);
    void setHaveBracelets(bool haveBracelets);
    bool getHaveBracelets();
    bool getHavePilot();
    void setSolidity(uint a);
    uint getSolidity();
private:
    bool _havePilot;
    bool _haveBracelets;
    uint _solidity;

};
#endif
