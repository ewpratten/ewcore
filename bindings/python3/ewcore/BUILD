load("@rules_python//python:defs.bzl", "py_test")
load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")


pybind_extension(
    name = "ewcore",
    srcs = ["ewcore_bindings.cc"],
    visibility = ["//visibility:public"],
    deps = [
        "//bindings/python3/ewcore/math",
    ],
)

py_test(
    name = "test",
    srcs = ["import_test.py"],
    main = "import_test.py",
    deps = [
        ":ewcore.so",
    ],
)
