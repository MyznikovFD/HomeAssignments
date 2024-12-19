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
    MyClass(const int& n, const std::vector<float>& v, const T* c): _n(n), _vect(v), _instance(c) {};
    int _n;
    std::vector<float> _vect;
    T* _instance;
    
    public:
    bool foo()
    {
        return _instance->bar(_n, _vect);
    };
};



template <class T>

class MyClass<int>
{
    MyClass(const int& n, const std::vector<float>& v, const T* c): _n(n), _vect(v), _instance(c) {};
    int _n;
    std::vector<float> _vect;
    T* _instance;
    
    public:
    bool foo()
    {
        return true;
    };
};



template <>

class MyClass<double>
{
    MyClass(const int& n, const std::vector<float>& v, const T8 c): _n(n), _vect(v), _instance(c) {};
    int _n;
    std::vector<float> _vect;
    T* _instance;
    
    public:
    bool foo()
    {
        return false;
    };
};
#endif
