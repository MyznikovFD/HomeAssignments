#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

typedef unsigned int uint;

class Transformers {
    public:
        Transformers();
        bool move();
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
        uint _level = 0;
        uint _strength = 0;
        uint _range = 0;
        uint _fuel = 0;
        uint _ammo = 0;
};
#endif
