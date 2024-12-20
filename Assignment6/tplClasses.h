//Myznikov Fedor Denisovich
//st129282@student.spbu.ru
//Assignment6
//target - to explore working with templates

#ifndef DECLARATION_H
#define DECLARATION_H

#include <iostream>
#include <vector>

template <class T>

class MyClass
{
    int _n;
    std::vector<float> _vect;
    T _instance;
    
    public:
    MyClass(const int& n, const std::vector<float>& v, const T& c): _n(n), _vect(v), _instance(c) {};    
    bool foo()
    {
        return _instance.bar(_n, _vect);
    };
};



template <>

class MyClass<int>
{
    int _n;
    std::vector<float> _vect;
    int _instance;
    
    public:
    MyClass(const int& n, const std::vector<float>& v, const int& c): _n(n), _vect(v), _instance(c) {};
    bool foo()
    {
        return true;
    };
};



template <>

class MyClass<double>
{
    int _n;
    std::vector<float> _vect;
    double _instance;
    
    public:
    MyClass(const int& n, const std::vector<float>& v, const double& c): _n(n), _vect(v), _instance(c) {};
    bool foo()
    {
        return false;
    };
};
#endif
