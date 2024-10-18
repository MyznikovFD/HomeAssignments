#include <iostream>
#include "Decepticon.h"

typedef unsigned int uint;


bool Decepticons::roar() {
    return true;
};

bool Decepticons::attack() {
    return true;
};

void Decepticons::setFuel(uint fuel) {
    _fuel = fuel;
};

void Decepticons::setAmmo(uint ammo) {
    _ammo = ammo;
};

void Decepticons::setWeapon(std::string weapon) {
    _weapon = weapon;
};

uint Decepticons::getFuel() {
    return (_fuel);
};

uint Decepticons::getAmmo() {
    return (_ammo);
};

std::string Decepticons::getWeapon(){
    return (_weapon);
};
