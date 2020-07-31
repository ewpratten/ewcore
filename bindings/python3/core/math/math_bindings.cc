#include "core/math/mathutils.hh"
#include "./math_bindings.hh"

void ewcore::math::initMathUtils(py::module m){

    // Create a mathutils module
    py::module mathUtilsMod = m.def_submodule("mathutils", "");

    mathUtilsMod.doc() = "Math utilities";

    // clamp()
    mathUtilsMod.def("clamp", &ewcore::math::clamp,
          "Clamp a value between two other values");
}
