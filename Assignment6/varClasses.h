//Myznikov Fedor Denisovich
//st129282@student.spbu.ru
//Assignment6
//target - to explore working with templates

#ifndef SUBCLASSES_H
#define SUBCLASSES_H

#include <iostream>
#include <vector>


class class1
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

class class2
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

class class3
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
