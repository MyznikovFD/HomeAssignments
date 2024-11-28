#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Autobots: public Transformers
{
public:
    bool roar();
    bool defend();
    bool shame();
    void setWhoop(std::string defence);
    void setKindness(uint kindness);
    std::string getWhoop();
    uint getKindness();
private:
    std::string _whoop = "hurra";
    uint _kindness = 10;
};
#endif
