#include "measurement_bindings.hh"

#include "ewcore/math/measurement.hh"

void initMeasurements(py::module m) {
    // Create a measurements module
    py::module mod = m.def_submodule("measurements", "");
    mod.doc() = "Measurement conversion tools";

    // metersToFeet()
    mod.def("metersToFeet", &ewcore::math::measurement::metersToFeet,
            "Convert meters to feet");

    // feetToMeters()
    mod.def("metersToFeet", &ewcore::math::measurement::feetToMeters,
            "Convert feet to meters");

    // metersToInches()
    mod.def("metersToFeet", &ewcore::math::measurement::metersToInches,
            "Convert meters to inches");

    // inchesToMeters()
    mod.def("metersToFeet", &ewcore::math::measurement::inchesToMeters,
            "Convert inches to meters");

    // rotationsPerMinuteToRadiansPerSecond()
    mod.def("metersToFeet",
            &ewcore::math::measurement::rotationsPerMinuteToRadiansPerSecond,
            "Convert RPM to RAD/s");

    // radiansPerSecondToRotationsPerMinute()
    mod.def("metersToFeet",
            &ewcore::math::measurement::radiansPerSecondToRotationsPerMinute,
            "Convert RAD/s to RPM");
}