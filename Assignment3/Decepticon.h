#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Decepticons: public Transformers
{
public:
    Decepticons();
    Decepticons(const uint& trickery, const uint& cruelty, Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo);
    ~Decepticons();
    bool roar();
    bool attack();
    bool mock();
    void setCruelty(uint a);
    void setTrickery(uint a);
    uint getCruelty();
    uint getTrickery();

private:
    uint _trickery = 30;
    uint _cruelty = 80;
};
#endif
