#include <iostream>
#include <gtest/gtest.h>

#include "Transformer.h"

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
