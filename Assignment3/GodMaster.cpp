#include <iostream>
#include "GodMaster.h"

typedef unsigned int uint;


bool GodMasters::toBeManaged()
{
    return true;
};

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
