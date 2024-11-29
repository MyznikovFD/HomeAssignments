#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Decepticons: public Transformers
{
public:
    Decepticons(
        Guns gun, const uint& enginePower, const uint& level, const uint& strength, const uint& range, const uint& fuel, const uint& ammo, const uint& trickery = 3, const uint& cruelty = 10 ):
        Transformers(gun, enginePower, level, strength, range, fuel, ammo)
    {
        _cruelty = cruelty;
        _trickery = trickery;
    };
    ~Decepticons() {};
    bool roar();
    bool attack();
    bool mock();
    void setCruelty(uint a);
    void setTrickery(uint a);
    uint getCruelty();
    uint getTrickery();

private:
    uint _trickery;
    uint _cruelty;
};
#endif
