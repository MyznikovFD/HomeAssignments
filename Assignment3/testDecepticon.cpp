#include <iostream>
#include <gtest/gtest.h>

#include "Decepticon.h"


TEST(decepticons, Constructor)
{
    Guns* gun = new Guns(599, 89);
    Decepticons* decepticon = new Decepticons(gun, 8098798, 834567899, 9567800, 945501, 8197, 1602);

    EXPECT_EQ(decepticon->getTrickery(), 97);
    EXPECT_EQ(decepticon->getCruelty(), 2);
    EXPECT_EQ(decepticon->getGunPower(), 99);
    EXPECT_EQ(decepticon->getGunFireRate(), 89);
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
