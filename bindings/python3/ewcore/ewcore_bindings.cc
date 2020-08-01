#include "ewcore/math/mathutils.hh"
#include "bindings/python3/ewcore/math/mathutils_bindings.hh"
#include "bindings/python3/ewcore/math/measurement_bindings.hh"

PYBIND11_MODULE(ewcore, m) {
    m.doc() = "Python3 bindings to ewcore";


    // Handle math bindings
    py::module mathMod = m.def_submodule("math");
    initMathUtils(mathMod);
    initMeasurements(mathMod);
}