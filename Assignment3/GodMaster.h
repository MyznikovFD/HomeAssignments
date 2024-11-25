#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class GodMasters: public Transformers
{
public:
    bool toBeManaged();
    bool toFight();
    void setPilot(bool havingPilot);
    void setHavingBracelets(bool havingBracelets);
    bool getHavingBracelets();
    bool getHavingPilot();
private:
    bool _havingPilot;
    bool _havingBracelets;
};
#endif
