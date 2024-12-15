//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Autobots: public Transformers
{
public:
    Autobots();
    Autobots(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const uint& kindness, const std::string& whoop);
    ~Autobots();
    bool defend();
    bool shame();
    void setWhoop(std::string whoop);
    void setKindness(uint kindness);
    std::string roar();
    uint getKindness();
private:
    uint _kindness;
    std::string _whoop;
};
#endif
