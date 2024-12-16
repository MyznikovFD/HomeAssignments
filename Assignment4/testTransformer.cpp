//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to test behaviour overloaded functions

#include <iostream>
#include <ostream>
#include <string>
#include <gtest/gtest.h>

#include "Transformer.h"

TEST(transformers, Constructor)
{
    Transformers tr;
    EXPECT_EQ(tr.getEnginePower(), 10);
    EXPECT_EQ(tr.getStrength(), 10);
    EXPECT_EQ(tr.getFuel(), 10);
    EXPECT_EQ(tr.getAmmo(), 10);


    Guns* gun = new Guns(599, 89);
    Transformers* transformer = new Transformers(gun, 787, 34, 0, 9999);

    EXPECT_EQ(transformer->getGunPower(), 99);
    EXPECT_EQ(transformer->getGunFireRate(), 89);
    EXPECT_EQ(transformer->getEnginePower(), 87);
    EXPECT_EQ(transformer->getStrength(), 34);
    EXPECT_EQ(transformer->getFuel(), 0);
    EXPECT_EQ(transformer->getAmmo(), 9999);
    delete transformer;
    delete gun;


};

TEST(transformers, SettersGetters)
{
    Guns* gun = new Guns();
    Transformers tr;
    tr.setGun(gun);
    tr.setEngine(0);
    tr.setAmmo(999);
    tr.setStrength(100);
    tr.setFuel(101);

    EXPECT_EQ(tr.getGunFireRate(), 10);
    EXPECT_EQ(tr.getGunPower(), 10);
    EXPECT_EQ(tr.getEnginePower(), 0);
    EXPECT_EQ(tr.getStrength(), 0);
    EXPECT_EQ(tr.getFuel(), 1);
    EXPECT_EQ(tr.getAmmo(), 999);
};

TEST(transformers, Methods)
{
    Guns* gun1 = new Guns(599, 89);
    Transformers* tran1 = new Transformers(gun1, 787, 234, 0, 9999);
    ASSERT_TRUE(tran1->move());
    ASSERT_TRUE(tran1->jump());
    ASSERT_TRUE(tran1->fire());
    ASSERT_TRUE(tran1->ultimate());
    ASSERT_TRUE(tran1->transform());


    delete tran1;
    delete gun1;
};


//overloaded functions
TEST(transformers, overloading)
{
    Guns* gun = new Guns(599, 89);
    Transformers tr = Transformers(gun, 787, 234, 0, 9999);
    std::ostringstream oss;
    oss << tr;
    std::string instance = "Information about transformer:\nGun Firerate: 89\nGun power: 99\nAmmo: 9999\nEngine power: 87\nStrength: 34\nFuel: 0\n";

    EXPECT_EQ(oss.str(), instance);
    delete gun;

    Guns* gun1 = new Guns(599, 89);
    Transformers tran1 = Transformers(gun1, 787, 234, 0, 9999);

    Guns* gun2 = new Guns(50, 50);
    Transformers tran2 = Transformers(gun2, 50, 16550, 50, 2134550);

    ASSERT_TRUE(tran1 < tran2);
    ASSERT_FALSE(tran1 > tran2);
    delete gun1;
    delete gun2;
};

