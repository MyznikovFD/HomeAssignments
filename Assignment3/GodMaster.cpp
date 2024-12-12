#include <iostream>
#include "GodMaster.h"

typedef unsigned int uint;


GodMasters::GodMasters() {};
GodMasters::GodMasters(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const bool& havePilot, const bool& haveBracelets, const uint& solidity):
    Transformers(gun, enginePower, strength, fuel, ammo), _havePilot(havePilot), _haveBracelets(haveBracelets), _solidity(solidity%100)
{};
GodMasters::~GodMasters() {};

bool GodMasters::fight()
{
    return true;
};

bool GodMasters::dance()
{
    return true;
};

void GodMasters::setHavePilot(bool havePilot)
{
    _havePilot = havePilot;
};

void GodMasters::setHaveBracelets(bool haveBracelets)
{
    _haveBracelets = haveBracelets;
};

bool GodMasters::getHavePilot()
{
    return (_havePilot);
};

bool GodMasters::getHaveBracelets()
{
    return (_haveBracelets);
};

void GodMasters::setSolidity(uint a)
{
    _solidity = a%100;
};

uint GodMasters::getSolidity()
{
    return _solidity;
};
