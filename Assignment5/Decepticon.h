//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to explore using of virtual methods and vectors


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


    bool transform();
    bool fire();
    bool ultimate();




    void setCruelty(uint a);
    void setTrickery(uint a);
    uint getCruelty();
    uint getTrickery();

private:
    uint _trickery;
    uint _cruelty;
};
#endif
