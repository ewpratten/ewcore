#include "core/math/mathutils.hh"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(mathutils, m) {
    m.doc() = "Math utilities";

    // clamp()
    m.def("clamp", &ewcore::math::clamp,
          "Clamp a value between two other values");
}