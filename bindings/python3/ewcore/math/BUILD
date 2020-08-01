load("@pybind11_bazel//:build_defs.bzl", "pybind_extension", "pybind_library")

# Mathutils
pybind_library(
    name = "math",
    srcs = ["math_bindings.cc"],
    hdrs = ["math_bindings.hh"],
    visibility = ["//visibility:public"],
    deps = [
        "//ewcore/math:mathutils",
    ],
)
