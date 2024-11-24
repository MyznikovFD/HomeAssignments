#include <iostream>
#include "Autobot.h"

typedef unsigned int uint;


bool Autobots::roar() {
    return true;
};

bool Autobots::defend() {
    return true;
};

bool Autobots::shame() {
    return true;
};

void Autobots::setDefence(std::string defence) {
    _defence = defence;
};

void Autobots::setKindness(uint kindness) {
    _kindness = kindness;
};

std::string Autobots::getDefence(){
    return (_defence);
};

uint Autobots::getKindness() {
    return (_kindness);
};
