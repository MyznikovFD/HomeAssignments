#include <iostream>
#include "GodMaster.h"

typedef unsigned int uint;


bool GodMasters::toFight()
{
    return true;
};

void GodMasters::setPilot(bool havePilot)
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
    _solidity = a%10;
    };

uint GodMasters::getSolidity()
    {
    return _solidity;
    };
