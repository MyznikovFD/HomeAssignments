#ifndef GUNS_CPP
#define GUNS_CPP
typedef unsigned int uint;
class Guns
{
    uint _power;
    uint _fireRate;
public:
    Guns(uint p, uint f):
        _power(p%10), _fireRate(f%10) {};
    ~Guns() {};
};
#endif
