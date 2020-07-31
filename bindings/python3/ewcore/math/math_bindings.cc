#include "ewcore/math/mathutils.hh"
#include "./math_bindings.hh"

void ewcore::math::initMathUtils(py::module m){

    // Create a mathutils module
    py::module mathUtilsMod = m.def_submodule("mathutils", "");

    mathUtilsMod.doc() = "Math utilities";

    // clamp()
    mathUtilsMod.def("clamp", &ewcore::math::clamp,
          "Clamp a value between two other values");

    // epsilonEquals()
    mathUtilsMod.def("epsilonEquals", &ewcore::math::epsilonEquals,
          "Check if two values are equal to eachother within a range", py::arg("a"), py::arg("b"), py::arg("epsilon") = kVerySmallNumber);

}
