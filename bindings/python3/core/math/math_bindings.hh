#if !defined(_PY_EWCORE_MATH_MATHUTILS_HH)
#define _PY_EWCORE_MATH_MATHUTILS_HH

#include <pybind11/pybind11.h>
namespace py = pybind11;

namespace ewcore {
namespace math {

// Mathutils module
void initMathUtils(py::module);


}  // namespace math
}  // namespace ewcore

#endif  // _PY_EWCORE_MATH_MATHUTILS_HH
