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

TEST(autobots, Constructor)
{   
    Guns* gun = new Guns(599, 89);
    Autobots* autobot = new Autobots(gun, 898, 899, 900, 901, 897, "hurra");

    EXPECT_EQ(autobot->getKindness(), 97);
    EXPECT_EQ(autobot->getWhoop(), "hurra");
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
    EXPECT_EQ(aut.getWhoop(), "rrr");
    
};

int main(int argc, char **argv)
{

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
};
