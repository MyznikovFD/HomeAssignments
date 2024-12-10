#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Autobots: public Transformers
{
public:
    Autobots(const uint& kindness, const std::string& whoop, Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo);
    ~Autobots();
    bool roar();
    bool defend();
    bool shame();
    void setWhoop(std::string whoop);
    void setKindness(uint kindness);
    std::string getWhoop();
    uint getKindness();
private:
    std::string _whoop = "hurra";
    uint _kindness = 99;
};
#endif
