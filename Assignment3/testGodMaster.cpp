//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment3

#include <iostream>
#include <gtest/gtest.h>

#include "Transformer.h"
#include "GodMaster.h"


TEST(godMaster, Constructor)
{
    Guns* gun = new Guns(1599, 189);
    GodMasters* godMaster = new GodMasters(gun, 1898, 1899, 1900, 1901, false, true, 555);

    EXPECT_EQ(godMaster->getHavePilot(), false);
    EXPECT_EQ(godMaster->getHaveBracelets(), true);
    EXPECT_EQ(godMaster->getSolidity(), 55);
    EXPECT_EQ(godMaster->getGunPower(), 99);
    EXPECT_EQ(godMaster->getGunFireRate(), 89);
    EXPECT_EQ(godMaster->getEnginePower(), 98);
    EXPECT_EQ(godMaster->getStrength(), 99);
    EXPECT_EQ(godMaster->getFuel(), 0);
    EXPECT_EQ(godMaster->getAmmo(), 1901);
    delete godMaster;
    delete gun;
};

TEST(godMaster, SettersGetters)
{
    Guns* gun = new Guns(77, 88);
    GodMasters gdm;
    gdm.setGun(gun);
    gdm.setEngine(10);
    gdm.setAmmo(11);
    gdm.setStrength(12);
    gdm.setFuel(13);
    gdm.setSolidity(14);
    gdm.setHavePilot(true);
    gdm.setHaveBracelets(true);

    EXPECT_EQ(gdm.getGunFireRate(), 88);
    EXPECT_EQ(gdm.getGunPower(), 77);
    EXPECT_EQ(gdm.getEnginePower(), 10);
    EXPECT_EQ(gdm.getStrength(), 12);
    EXPECT_EQ(gdm.getFuel(), 13);
    EXPECT_EQ(gdm.getAmmo(), 11);
    EXPECT_EQ(gdm.getSolidity(), 14);
    EXPECT_EQ(gdm.getHavePilot(), true);
    EXPECT_EQ(gdm.getHaveBracelets(), true);
};

TEST(godMaster, Methods)
{

    GodMasters gdm;
    EXPECT_EQ(gdm.fight(), true);
    EXPECT_EQ(gdm.dance(), true);
};
