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

TEST(transformers, transformersConstructor)
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


int main(int argc, char **argv)
{

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
};
