#if !defined(_EWCORE_MATH_MATHUTILS_HH)
#define _EWCORE_MATH_MATHUTILS_HH

// This is a small number used in double comparison
#define kVerySmallNumber 1e-12

namespace ewcore {
namespace math {

double clamp(double val, double low, double high);

}  // namespace math
}  // namespace ewcore

#endif  // _EWCORE_MATH_MATHUTILS_HH
