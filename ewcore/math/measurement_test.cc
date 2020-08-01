#include "measurement.hh"
#include "mathutils.hh"

#include "gtest/gtest.h"

TEST(MeasurementTest, Test_metersToFeet) {

    // Calculate meters to feet
    double feet = ewcore::math::measurement::metersToFeet(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(feet, 3.28084, 0.0001), true);
}