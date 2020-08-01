#if !defined(_BINDINGS_MEASUREMENT_HH)
#define _BINDINGS_MEASUREMENT_HH

#include <pybind11/pybind11.h>
namespace py = pybind11;

// Measurements module
void initMeasurements(py::module);

#endif  // _BINDINGS_MEASUREMENT_HH
