#if !defined(_EWCORE_MATH_MATHUTILS_HH)
#define _EWCORE_MATH_MATHUTILS_HH

// This is a small number used in double comparison
#define kVerySmallNumber 1e-12

namespace ewcore {
namespace math {

// Clamp a value between two other values
double clamp(double val, double low, double high);

// Check if two values are equal to eachother within a range
bool epsilonEquals(double a, double b, double epsilon = kVerySmallNumber);

}  // namespace math
}  // namespace ewcore

#endif  // _EWCORE_MATH_MATHUTILS_HH
