//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4


#ifndef GUNS_CPP
#define GUNS_CPP
typedef unsigned int uint;
class Guns
{
    uint _power;
    uint _fireRate;
public:
    Guns(): _power(10), _fireRate(10) {};
    Guns(const uint& p, const uint& f):
        _power(p%100), _fireRate(f%100) {};
    ~Guns() {};
    uint getPower()
    {
        return _power;
    };
    uint getFireRate()
    {
        return _fireRate;
    };
};
#endif
