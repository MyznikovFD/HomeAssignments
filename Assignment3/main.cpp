#include <string>
#include <iostream>
#include <gtest/gtest.h>

#include "Autobot.h"
#include "Decepticon.h"
#include "GodMaster.h"
#include "Guns.cpp"
#include "Engine.cpp"

TEST(guns, gunsConstructor)
{
    Guns* gun = new Guns(599, 89);
    EXPECT_EQ(gun->getPower(), 99);
    EXPECT_EQ(gun->getFireRate(), 89);
    delete gun;

    Guns gun1;
    EXPECT_EQ(gun1.getPower(), 10);
    EXPECT_EQ(gun1.getFireRate(), 10);
};

TEST(engine, engineConstructor)
{
    Engine* engine = new Engine(799);
    EXPECT_EQ(engine->getPower(), 99);
    delete engine;

    Engine engine1;
    EXPECT_EQ(engine1.getPower(), 10);
    
    Engine* engine2 = new Engine(76);
    EXPECT_EQ(engine2->getPower(), 76);
    delete engine2;
    
    Engine* engine3 = new Engine(200);
    EXPECT_EQ(engine3->getPower(), 0);
    delete engine3;
};

TEST(transformers, Constructor)
{   
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
    Guns* gun = new Guns(599, 89);
    Transformers* tran = new Transformers(gun, 787, 34, 0, 9999);
    ASSERT_TRUE(tran->move());
    ASSERT_TRUE(tran->jump());
    ASSERT_TRUE(tran->fire());
    ASSERT_TRUE(tran->ultimate());
    ASSERT_TRUE(tran->transform());
    delete tran;
    delete gun;
};

TEST(autobots, Constructor)
{   
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

int main(int argc, char **argv)
{

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
};
