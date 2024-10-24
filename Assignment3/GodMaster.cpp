#include <iostream>
#include "GodMaster.h"

typedef unsigned int uint;


bool GodMasters::roar() {
    return true;
};

bool GodMasters::defend() {
    return true;
};

bool GodMasters::shame() {
    return true;
};

void GodMasters::HavingPilot(std::string defence) {
    _havingPilot = havingPilot;
};

void GodMasters::setHavingBracelets(uint ammo) {
    _havingBracelets = havingBracelets;
};

std::string GodMasters::getHavingPilot(){
    return (_havingPilot);
};

uint GodMasters::getHavingBracelets() {
    return (_havingBracelets);
};
