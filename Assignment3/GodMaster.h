#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h" 

typedef unsigned int uint;

class GodMasters: public Transformers {
    public:
        bool toBeManaged();
        bool toFight();
        bool shame();
        void setPilot(bool a);
        void setHavingBracelets(bool a);
        bool getHavingBracelets();
        bool getHavingPilot();
    private:
        bool havingPilot;
        bool havingBracelets;
};
#endif
