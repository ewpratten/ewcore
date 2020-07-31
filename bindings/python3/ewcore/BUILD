load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")


pybind_extension(
    name = "ewcore",
    srcs = ["ewcore_bindings.cc"],
    visibility = ["//visibility:public"],
    deps = [
        "//bindings/python3/ewcore/math",
    ],
)
