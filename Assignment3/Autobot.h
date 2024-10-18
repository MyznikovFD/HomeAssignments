#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
#include "Transformer.h" 

typedef unsigned int uint;

class Autobots: public Transformers {
    public:
        bool roar();
        bool defend();
        bool shame();
        void setFuel(uint fuel);
        void setAmmo(uint ammo);
        void setWeapon(std::string weapon);
        uint getFuel();
        uint getAmmo();
        std::string getWeapon();        
    private:
        std::string _weapon = "shield";
        uint _fuel = 0;
        uint _ammo = 0;
};
#endif
