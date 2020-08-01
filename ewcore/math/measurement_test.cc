#include "measurement.hh"

#include "gtest/gtest.h"
#include "mathutils.hh"

TEST(MeasurementTest, Test_metersToFeet) {
    // Calculate
    double feet = ewcore::math::measurement::metersToFeet(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(feet, 3.28084, 0.0001), true);
}

TEST(MeasurementTest, Test_feetToMeters) {
    // Calculate
    double meters = ewcore::math::measurement::feetToMeters(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(meters, 0.3048, 0.0001), true);
}

TEST(MeasurementTest, Test_metersToInches) {
    // Calculate
    double inches = ewcore::math::measurement::metersToInches(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(inches, 39.3701, 0.0001), true);
}

TEST(MeasurementTest, Test_inchesToMeters) {
    // Calculate
    double meters = ewcore::math::measurement::inchesToMeters(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(meters, 0.0254, 0.0001), true);
}

TEST(MeasurementTest, Test_rotationsPerMinuteToRadiansPerSecond) {
    // Calculate
    double rads = ewcore::math::measurement::rotationsPerMinuteToRadiansPerSecond(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(rads, 0.104719755, 0.000000001), true);
}

TEST(MeasurementTest, Test_radiansPerSecondToRotationsPerMinute) {
    // Calculate
    double rpm = ewcore::math::measurement::radiansPerSecondToRotationsPerMinute(1.0);

    // Use eps to compare with answer
    EXPECT_EQ(ewcore::math::epsilonEquals(rpm, 9.549296, 0.000001), true);
}