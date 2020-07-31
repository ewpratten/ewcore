#include "mathutils.hh"
#include "gtest/gtest.h"

TEST(MathUtilsTest, TestClamp) { EXPECT_EQ(ewcore::math::clamp(100.0, 0.0, 1.0), 1.0); }