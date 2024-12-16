//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4


#ifndef GODMASTER_H
#define GODMASTER_H
#include <iostream>
#include <string>
#include "Transformer.h"

typedef unsigned int uint;

class GodMasters: public Transformers
{
public:
    GodMasters();
    GodMasters(Guns* gun, const uint& enginePower, const uint& strength, const uint& fuel, const uint& ammo, const bool& havePilot, const bool& haveBracelets, const uint& solidity);
    ~GodMasters();
    
    bool fight();
    bool dance();
    
    void setHavePilot(bool havePilot);
    void setHaveBracelets(bool haveBracelets);
    
    bool getHaveBracelets();
    bool getHavePilot();
    
    void setSolidity(uint a);
    uint getSolidity();

private:
    bool _havePilot;
    bool _haveBracelets;
    uint _solidity;

};
//overloaded function
std::ostream& operator<<(std::ostream& oss, GodMasters& tr);
#endif
