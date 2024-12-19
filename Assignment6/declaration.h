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
    MyClass(const int& n, const std::vector<float>& v, const T& c): _n(n), _vect(v), _instance(c) {};
    int _n;
    std::vector<float> _vect;
    T _instance;
    
    public:
    bool foo()
    {
        return _instance.bar(_n, _vect);
    };
};

class Class1
{
public:
    int c_1_1() {return 0;};
    float c_1_2() {return 0.5;};
    void c_1_3() {};
    
    bool bar(const int& n, const std::vector<float>& v) 
    {
        return (n > 0);
    };
};

class Class2
{
public:
    int c_2_1() {return 0;};
    float c_2_2() {return 0.5;};
    void c_2_3() {};
    
    bool bar(const int& n, const std::vector<float>& v) 
    {
        return (!v.empty());
    };
};

class Class3
{
public:
    int c_3_1() {return 0;};
    float c_3_2() {return 0.5;};
    void c_3_3() {};
    
    bool bar(const int& n, const std::vector<float>& v) 
    {
        return(-n == static_cast<int>(v.size()));
    };
};    
#endif
