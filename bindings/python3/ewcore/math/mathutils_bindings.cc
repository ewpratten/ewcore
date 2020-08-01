#include "mathutils_bindings.hh"

#include "ewcore/math/mathutils.hh"

void initMathUtils(py::module m) {
    // Create a mathutils module
    py::module mod = m.def_submodule("mathutils", "");

    mod.doc() = "Math utilities";

    // clamp()
    mod.def("clamp", &ewcore::math::clamp,
            "Clamp a value between two other values");

    // epsilonEquals()
    mod.def("epsilonEquals", &ewcore::math::epsilonEquals,
            "Check if two values are equal to eachother within a range",
            py::arg("a"), py::arg("b"), py::arg("epsilon") = kVerySmallNumber);

    // map()
    mod.def("map", &ewcore::math::map,
            "Remap a value from one range to another");
}

