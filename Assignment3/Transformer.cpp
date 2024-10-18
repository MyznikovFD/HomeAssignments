#include <iostream>
#include "Transformer.h"

typedef unsigned int uint;

void Transformer::setStrength(uint strength) {
_strength = strength;
};

void Transformer::setLevel(uint level) {
_level = level;
};

void Transformer::setRange(uint range) {
_range = range;
};

void Transformer::setFuel(uint fuel) {
_fuel = fuel;
};

void Transformer::setAmmo(uint ammo) {
_ammo = ammo;
};


uint Transformer::getStrength() {
    return (_strength);
};

uint Transformer::getLevel() {
    return (_level);
};

uint Transformer::getRange() {
    return (_range);
};

uint Transformer::getFuel() {
    return (_fuel);
};

uint Transformer::getAmmo() {
    return (_ammo);
};
