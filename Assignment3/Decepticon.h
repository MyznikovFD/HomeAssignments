#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <iostream>
#include <string>
#include "Transformer.h" 

typedef unsigned int uint;

class Decepticons: public Transformers {
    public:
        bool roar();
        bool attack();
        void setFuel(uint fuel);
        void setAmmo(uint ammo);
        void setWeapon(std::string weapon);
        uint getFuel();
        uint getAmmo();
        std::string getWeapon();        
    private:
        std::string _weapon = "gun";
        uint _fuel = 0;
        uint _ammo = 0;
};
#endif
