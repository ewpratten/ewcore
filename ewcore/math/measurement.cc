#include "measurement.hh"

#include <math.h>

namespace ewcore {
namespace math {
namespace measurement {

double metersToFeet(double meters) {
    return metersToInches(meters) / kInchesPerFoot;
}

double feetToMeters(double feet) {
    return inchesToMeters(feet * kInchesPerFoot);
}

double metersToInches(double meters) { return meters / kMetersPerInch; }

double inchesToMeters(double inches) { return inches * kMetersPerInch; }

double rotationsPerMinuteToRadiansPerSecond(double rpm) {
    return rpm * M_PI / (kSecondsPerMinute / 2);
}
double radiansPerSecondToRotationsPerMinute(double radiansPerSecond) {
    return radiansPerSecond * (kSecondsPerMinute / 2) / M_PI;
}

}  // namespace measurement
}  // namespace math
}  // namespace ewcore
