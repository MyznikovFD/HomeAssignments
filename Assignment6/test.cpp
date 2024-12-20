//Myznikov Fedor Denisovich
//st129282@student.spbu.ru
//Assignment6
//target - to test written templates

#include <gtest/gtest.h>
#include <iostream>
#include <vector>

#include "varClasses.h"
#include "tplClasses.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
};


TEST(Specialization, int_true)
{
    std::vector<float> v(5,0);
    MyClass mc = MyClass(10, v, 345678);
    ASSERT_TRUE(mc.foo());         
};
TEST(Specialization, double_false)
{
    std::vector<float> v(5,0);
    MyClass mc = MyClass(0, v, 76.5);
    ASSERT_FALSE(mc.foo());         
};




TEST(Class1, positive)
{
    class1 object = class1();
    std::vector<float> v(5,0);
    MyClass mc = MyClass(10, v, object);
    ASSERT_TRUE(mc.foo());         
};
TEST(Class1, negative)
{
    class1 object = class1();
    std::vector<float> v(5,0);
    MyClass mc = MyClass(0, v, object);
    ASSERT_FALSE(mc.foo());         
};



TEST(Class2, positive)
{
    class2 object = class2();
    std::vector<float> v(5, 0.87);
    MyClass mc = MyClass(10, v, object);
    ASSERT_TRUE(mc.foo());         
};
TEST(Class2, negative)
{
    class2 object = class2();
    std::vector<float> v(0, 0.90);
    MyClass mc = MyClass(0, v, object);
    ASSERT_FALSE(mc.foo());         
};



TEST(Class3, positive)
{
    class3 object = class3();
    std::vector<float> v(10, 0.87);
    MyClass mc = MyClass(-10, v, object);
    ASSERT_TRUE(mc.foo());         
};
TEST(Class3, negative)
{
    class3 object = class3();
    std::vector<float> v(1, 90);
    MyClass mc = MyClass(0, v, object);
    ASSERT_FALSE(mc.foo());         
};
