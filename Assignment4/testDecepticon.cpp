//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment4
//target - to test behaviour default constructors

#include <iostream>
#include <gtest/gtest.h>

#include "Decepticon.h"

TEST(decepticons, Constructor)
{
//default constructors
    Decepticons* de = new Decepticons();

    EXPECT_EQ(de->getTrickery(), 10);
    EXPECT_EQ(de->getCruelty(), 10);
    EXPECT_EQ(de->getEnginePower(), 10);
    EXPECT_EQ(de->getStrength(), 10);
    EXPECT_EQ(de->getFuel(), 10);
    EXPECT_EQ(de->getAmmo(), 10);


    Guns* gun = new Guns(599, 89);
    Decepticons* decepticon = new Decepticons(gun, 8098798, 834567899, 9567800, 945501, 8197, 1602);
    EXPECT_EQ(decepticon->getGunPower(), 99);
    EXPECT_EQ(decepticon->getGunFireRate(), 89);
    EXPECT_EQ(decepticon->getTrickery(), 97);
    EXPECT_EQ(decepticon->getCruelty(), 2);
    EXPECT_EQ(decepticon->getEnginePower(), 98);
    EXPECT_EQ(decepticon->getStrength(), 99);
    EXPECT_EQ(decepticon->getFuel(), 0);
    EXPECT_EQ(decepticon->getAmmo(), 945501);
    delete decepticon;
    delete gun;
};

TEST(decepticons, SettersGetters)
{
    Guns* gun = new Guns();
    Decepticons dcp;
    dcp.setGun(gun);
    dcp.setEngine(0);
    dcp.setAmmo(999);
    dcp.setStrength(100);
    dcp.setFuel(101);
    dcp.setTrickery(6);
    dcp.setCruelty(34567);

    EXPECT_EQ(dcp.getGunFireRate(), 10);
    EXPECT_EQ(dcp.getGunPower(), 10);
    EXPECT_EQ(dcp.getEnginePower(), 0);
    EXPECT_EQ(dcp.getStrength(), 0);
    EXPECT_EQ(dcp.getFuel(), 1);
    EXPECT_EQ(dcp.getAmmo(), 999);
    EXPECT_EQ(dcp.getTrickery(), 6);
    EXPECT_EQ(dcp.getCruelty(), 67);

};

TEST(decepticons, Methods)
{

    Decepticons dcp;
    EXPECT_EQ(dcp.mock(), true);
    EXPECT_EQ(dcp.attack(), true);
};

//overloaded functions
TEST(decepticons, overloading)
{
    Guns* gun = new Guns(500, 101);
    Decepticons dec = Decepticons(gun, 8098798, 834567899, 9567800, 945501, 8197, 1602);
    std::ostringstream oss;
    oss << dec;
    std::string instance = "Information about decepticon:\nGun Firerate: 1\nGun power: 0\nAmmo: 945501\nEngine power: 98\nStrength: 99\nFuel: 0\nTrickery: 97\nCruelty: 2\n";
    EXPECT_EQ(oss.str(), instance);
    delete gun;



    Guns* gun1 = new Guns(599, 101);
    Decepticons dec1 = Decepticons(gun1, 8098798, 567899, 9567800, 945501, 8197, 1602);

    Guns* gun2 = new Guns(50, 50);
    Decepticons dec2 = Decepticons(gun2, 50, 16550, 50, 2134550, 901, 834567899);

    EXPECT_TRUE(dec2 < dec1);
    ASSERT_TRUE(dec1 > dec2);
    delete gun1;
    delete gun2;
};
