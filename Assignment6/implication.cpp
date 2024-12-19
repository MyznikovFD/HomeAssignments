#include <iostream>
#include <vector>
#include "declaration.h"


//Methods for MyClass

template <class T>
MyClass::MyClass(const int& n, const std::vector<float>& v, const T& c): _n(n), _vect(v), _instance(c) {};

bool MyClass<T>::foo()
{
    return _instance.bar(_n, _vect);
};
//-------------------------



//Methods for Class1

bool Class1::bar(const int& n, const std::vector<float>& v)
{
    return (n > 0);
};


int Class1::c_1_1();
{
    return 0;
};

float Class1::c_1_2();
{
    return 0.2; 
};

void Class1::c_1_3() {};
//-------------------------



//Methods for Class2

bool Class2::bar(const int& n, const std::vector<float>& v)
{
    return (!v.empty());
};


int Class2::c_2_1()
{
    return 0;
};

float Class2::c_2_2()
{
    return 0.2;
};

void Class2::c_2_3() {};
//-------------------------



//Methods for Class3

bool Class3::bar(const int& n, const std::vector<float>& v)
{
    return (-n == static_cast<int>(v.size()));
};


int Class3::c_3_1()
{
    return 0; 
};

float Class3::c_3_2()
{
    return 0.2; 
}

void Class3::c_3_3() {};
