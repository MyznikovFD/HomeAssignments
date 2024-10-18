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

void Autobots::setFuel(uint fuel) {
    _fuel = fuel;
};

void Autobots::setAmmo(uint ammo) {
    _ammo = ammo;
};

void Autobots::setWeapon(std::string weapon) {
    _weapon = weapon;
};

uint Autobots::getFuel() {
    return (_fuel);
};

uint Autobots::getAmmo() {
    return (_ammo);
};

std::string Autobots::getWeapon(){
    return (_weapon);
};
