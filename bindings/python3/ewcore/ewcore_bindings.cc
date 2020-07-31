#include "core/math/mathutils.hh"
#include "bindings/python3/core/math/math_bindings.hh"

PYBIND11_MODULE(ewcore, m) {
    m.doc() = "Python3 bindings to ewcore";


    // Handle math bindings
    py::module mathMod = m.def_submodule("math");
    ewcore::math::initMathUtils(mathMod);
}