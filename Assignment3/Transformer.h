#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

typedef unsigned int uint;

class Transformer {
    public:
        Transformer() {
            std::cout << "Level: " << getLevel << " Strength: " << getStrength << " Range: " << getRange << " Fuel: " << getFuel << " Ammo: " << getAmmo << std::endl;
        };
        bool move();
        bool turn();
        bool jump();
        bool fire();
        bool ultimate();
        bool transform();
        void setStrength(uint strength);
        void setLevel(uint level);
        void setRange(uint range);
        void setFuel(uint fuel);
        void setAmmo(uint ammo);
        uint getStrength();
        uint getLevel();
        uint getRange();
        uint getFuel();
        uint getAmmo();
    private:
        uint _level;
        uint _strength;
        uint _range;
        uint _fuel;
        uint _ammo;
};
#endif
