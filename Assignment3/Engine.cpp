#ifndef ENGINE_CPP
#define ENGINE_CPP
typedef unsigned int uint;
class Engine
{
    uint _power;
public:
    Engine(const uint& p = 10):
        _power(p%101) {};
    ~Engine() {};
    uint getPower()
    {
        return _power;
    };
};
#endif
