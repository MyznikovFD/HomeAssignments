#include <iostream>
#include "Transformer.h"

typedef unsigned int uint;

int main() {
    Transformers optimus;
    std::cout << "Level: " << optimus.getLevel() << std::endl;
    std::cout << "Strength: " << optimus.getStrength() << std::endl;
    std::cout << "Range: " << optimus.getRange() << std::endl;
    std::cout << "Fuel: " << optimus.getFuel() << std::endl;
    std::cout << "Ammo: " << optimus.getAmmo() << std::endl;
}

Transformers::Transformers() {       

}


bool move() {
    return true;
};

bool jump() {
    return true;
};

bool fire() {
    return true;
};

bool ultimate() {
    return true;
};

bool transform() {
    return true;
};

void Transformers::setStrength(uint strength) {
    _strength = strength;
};

void Transformers::setLevel(uint level) {
    _level = level;
};

void Transformers::setRange(uint range) {
    _range = range;
};

void Transformers::setFuel(uint fuel) {
    _fuel = fuel;
};

void Transformers::setAmmo(uint ammo) {
    _ammo = ammo;
};


uint Transformers::getStrength() {
    return (_strength);
};

uint Transformers::getLevel() {
    return (_level);
};

uint Transformers::getRange() {
    return (_range);
};

uint Transformers::getFuel() {
    return (_fuel);
};

uint Transformers::getAmmo() {
    return (_ammo);
};
