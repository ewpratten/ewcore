load("@rules_cc//cc:defs.bzl", "cc_library")
load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

# All of math
filegroup(
    name = "math",
    data = [
        ":mathutils.so",
    ],
)

# Mathutils
pybind_extension(
    name = "mathutils",
    srcs = ["mathutils_binding.cc"],
    visibility = ["//visibility:public"],
    deps = [
        "//core/math:mathutils",
    ],
)
