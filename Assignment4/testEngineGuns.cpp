#include <iostream>
#include <gtest/gtest.h>

#include "Guns.cpp"
#include "Engine.cpp"

TEST(guns, gunsConstructor)
{
    Guns* gun = new Guns(599, 89);
    EXPECT_EQ(gun->getPower(), 99);
    EXPECT_EQ(gun->getFireRate(), 89);
    delete gun;
//Myznikov Fedor Denisovich
//st129282@@student.spbu.ru
//Assignment3


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
