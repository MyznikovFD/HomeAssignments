#include <iostream>
#include "GodMaster.h"

typedef unsigned int uint;


bool GodMasters::toFight()
{
    return true;
};

void GodMasters::setPilot(bool havingPilot)
{
    _havingPilot = havingPilot;
};

void GodMasters::setHavingBracelets(bool havingBracelets)
{
    _havingBracelets = havingBracelets;
};

bool GodMasters::getHavingPilot()
{
    return (_havingPilot);
};

bool GodMasters::getHavingBracelets()
{
    return (_havingBracelets);
};

void GodMasters::setSpeed(uint a)
    {
    if (a <= 10)
        GodMasters::_speed = a;
    };
void GodMasters::setSolidity(uint a)
    {
    if (a <= 10)
        _solidity = a;
    };
uint GodMasters::getSpeed()
    {
    return _speed;
    };
uint GodMasters::getSolidity()
    {
    return _solidity;
    };
