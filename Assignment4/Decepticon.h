//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
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
    Decepticons(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& trickery, const uint& cruelty);
    ~Decepticons();

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
//overloaded function
std::ostream& operator<<(std::ostream& oss, Decepticons& tr);
#endif
