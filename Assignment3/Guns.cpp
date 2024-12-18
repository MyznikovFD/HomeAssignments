//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment3


#ifndef GUNS_CPP
#define GUNS_CPP
typedef unsigned int uint;
class Guns
{
    uint _power;
    uint _fireRate;
public:
    Guns(const uint& p = 10, const uint& f = 10):
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
