#include "mathutils.hh"

#include "gtest/gtest.h"

TEST(MathUtilsTest, TestClamp) {
    EXPECT_EQ(ewcore::math::clamp(100.0, 0.0, 1.0), 1.0);
}

TEST(MathUtilsTest, TestEpsilonEquals) {
    EXPECT_EQ(ewcore::math::epsilonEquals(2, 0, 4), true);
    EXPECT_EQ(ewcore::math::epsilonEquals(0, 0), true);
}

TEST(MathUtilsTest, TestMap) {
    EXPECT_EQ(ewcore::math::map(1, 0, 10, 0, 100), 10);
}