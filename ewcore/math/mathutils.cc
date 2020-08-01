#include "mathutils.hh"

#include <math.h>

namespace ewcore {
namespace math {

double clamp(double val, double low, double high) {
    return std::fmax(low, std::fmin(val, high));
}

bool epsilonEquals(double a, double b, double epsilon) {
    return (a - epsilon <= b) && (a + epsilon >= b);
}

double map(double value, double input_low, double input_high, double output_low,
           double output_high) {
    return (value - input_low) * (output_high - output_low) /
               (input_high - input_low) +
           output_low;
}

}  // namespace math
}  // namespace ewcore