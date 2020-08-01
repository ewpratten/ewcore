load("@pybind11_bazel//:build_defs.bzl", "pybind_library")

pybind_library(
    name = "all_bindings",
    deps = [
        ":mathutils_bindings",
        ":measurement_bindings",
    ],
    visibility = ["//visibility:public"],
)

# Mathutils
pybind_library(
    name = "mathutils_bindings",
    srcs = ["mathutils_bindings.cc"],
    hdrs = ["mathutils_bindings.hh"],
    deps = [
        "//ewcore/math:mathutils",
    ],
)

# Measurement
pybind_library(
    name = "measurement_bindings",
    srcs = ["measurement_bindings.cc"],
    hdrs = ["measurement_bindings.hh"],
    deps = [
        "//ewcore/math:measurement",
    ],
)
