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
        bool mock();
        void setWeapon(std::string weapon);
        std::string getWeapon();        
    private:
        std::string _weapon = "gun";
        uint cruelty = 10;
};
#endif
