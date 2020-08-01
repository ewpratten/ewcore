#if !defined(_EWCORE_MATH_MEASUREMENT_HH)
#define _EWCORE_MATH_MEASUREMENT_HH

#define kInchesPerFoot 12.0
#define kMetersPerInch 0.0254
#define kSecondsPerMinute 60

namespace ewcore {
namespace math {
namespace measurement {

double metersToFeet(double meters);
double feetToMeters(double feet);
double metersToInches(double meters);
double inchesToMeters(double inches);
double rotationsPerMinuteToRadiansPerSecond(double rpm);
double radiansPerSecondToRotationsPerMinute(double radiansPerSecond);

}  // namespace measurement
}  // namespace math
}  // namespace ewcore

#endif  // _EWCORE_MATH_MEASUREMENT_HH
