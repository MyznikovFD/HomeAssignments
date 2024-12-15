//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4

#ifndef ENGINE_CPP
#define ENGINE_CPP
typedef unsigned int uint;
class Engine
{
    uint _power;
public:
    Engine(const uint& p = 10):
        _power(p%100) {};
    ~Engine() {};
    uint getPower()
    {
        return _power;
    };
};
#endif
