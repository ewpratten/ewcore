load("@rules_python//python:defs.bzl", "py_library", "py_test")
load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")


pybind_extension(
    name="ewcore",
    srcs = ["ewcore_bindings.cc"],
    deps = [
        "//bindings/python3/core/math",
    ],
    visibility = ["//visibility:public"],
)

py_test(
    name = "ewcore_test",
    srcs = ["import_test.py"],
    main = "import_test.py",
    deps = [
        ":ewcore.so",
    ],
)
