#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Autobots: public Transformers
{
public:
    Autobots(
        Guns gun, const uint& enginePower, const uint& level, const uint& strength, const uint& range, const uint& fuel, const uint& ammo, const std::string whoop = "hurra", const uint& kindness = 10 ):
        Transformers(gun, enginePower, level, strength, range, fuel, ammo)
    {
        _whoop = whoop;
        _kindness = kindness;
    };
    ~Autobots() {};
    bool roar();
    bool defend();
    bool shame();
    void setWhoop(std::string defence);
    void setKindness(uint kindness);
    std::string getWhoop();
    uint getKindness();
private:
    std::string _whoop = "hurra";
    uint _kindness;
};
#endif
