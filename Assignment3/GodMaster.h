#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class GodMasters: public Transformers
{
public:
    bool toFight();
    void setPilot(bool havingPilot);
    void setHavingBracelets(bool havingBracelets);
    bool getHavingBracelets();
    bool getHavingPilot();
    void setSpeed(uint a);
    void setSolidity(uint a);
    uint getSpeed();
    uint getSolidity();
private:
    bool _havingPilot;
    bool _havingBracelets;
    uint _speed;
    uint _solidity;

};
#endif
