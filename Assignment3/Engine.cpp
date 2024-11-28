#ifndef ENGINE_CPP
#define ENGINE_CPP
typedef unsigned int uint;
class Engine
{
    uint _power;
public:
    Engine(uint p):
        _power(p%10) {};
    ~Engine() {};
};
#endif
