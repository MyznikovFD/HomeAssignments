//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to test behaviour overloaded functions
//target - to test behaviour default constructors

#include <string>
#include <iostream>
#include <gtest/gtest.h>

#include "Autobot.h"


TEST(autobots, Constructor)
{
//default constructors
    Autobots au;
    EXPECT_EQ(au.getEnginePower(), 10);
    EXPECT_EQ(au.getStrength(), 10);
    EXPECT_EQ(au.getFuel(), 10);
    EXPECT_EQ(au.getAmmo(), 10);
    EXPECT_EQ(au.getKindness(), 10);
    EXPECT_EQ(au.roar(), "Hurra!");

    Guns* gun = new Guns(599, 89);
    Autobots* autobot = new Autobots(gun, 898, 899, 900, 901, 897, "hurra");

    EXPECT_EQ(autobot->getKindness(), 97);
    EXPECT_EQ(autobot->roar(), "hurra");
    EXPECT_EQ(autobot->getGunPower(), 99);
    EXPECT_EQ(autobot->getGunFireRate(), 89);
    EXPECT_EQ(autobot->getEnginePower(), 98);
    EXPECT_EQ(autobot->getStrength(), 99);
    EXPECT_EQ(autobot->getFuel(), 0);
    EXPECT_EQ(autobot->getAmmo(), 901);
    delete autobot;
    delete gun;
};

TEST(autobots, SettersGetters)
{
    Guns* gun = new Guns();
    Autobots aut;
    aut.setGun(gun);
    aut.setEngine(0);
    aut.setAmmo(999);
    aut.setStrength(100);
    aut.setFuel(101);
    aut.setKindness(6);
    aut.setWhoop("rrr");

    EXPECT_EQ(aut.getGunFireRate(), 10);
    EXPECT_EQ(aut.getGunPower(), 10);
    EXPECT_EQ(aut.getEnginePower(), 0);
    EXPECT_EQ(aut.getStrength(), 0);
    EXPECT_EQ(aut.getFuel(), 1);
    EXPECT_EQ(aut.getAmmo(), 999);
    EXPECT_EQ(aut.getKindness(), 6);
    EXPECT_EQ(aut.roar(), "rrr");

};
TEST(autobots, Methods)
{

    Autobots aut;
    EXPECT_EQ(aut.defend(), true);
    EXPECT_EQ(aut.shame(), true);
};

//overloaded functions
//

TEST(autobots, overloading)
{
    Guns* gun = new Guns(500, 101);
    Autobots aut = Autobots(gun, 898, 899, 900, 901, 897, "hurra");
    std::ostringstream oss;
    oss << aut;
    std::string instance = "Information about autobot:\nGun Firerate: 1\nGun power: 0\nAmmo: 901\nEngine power: 98\nStrength: 99\nFuel: 0\nKindness: 97\nWhoop: hurra\n";
    EXPECT_EQ(oss.str(), instance);
    delete gun;



    Guns* gun1 = new Guns(599, 101);
    Autobots tran1 = Autobots(gun1, 898, 899, 900, 901, 897, "hurra");

    Guns* gun2 = new Guns(50, 50);
    Autobots tran2 = Autobots(gun2, 50, 16550, 50, 2134550, 901, "hurra");

    ASSERT_TRUE(tran2 < tran1);
    ASSERT_TRUE(tran1 > tran2);
    delete gun1;
    delete gun2;
};
