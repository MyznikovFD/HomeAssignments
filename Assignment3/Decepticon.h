#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class Decepticons: public Transformers
{
public:
    bool roar();
    bool attack();
    bool mock();
    void setCruelty(uint a);
    void setTrickery(uint a);
    uint getCruelty();
    uint getTrickery();

private:
    uint _trickery = 3;
    uint _cruelty = 10;
};
#endif
