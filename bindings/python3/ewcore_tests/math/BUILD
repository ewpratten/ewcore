load("@rules_python//python:defs.bzl", "py_test")

test_suite(
    name = "test",
    tests = [":mathutils_tests"],
    visibility = ["//visibility:public"],
)

py_test(
    name = "mathutils_tests",
    srcs = ["mathutils_tests.py"],
    data = [
        "//bindings/python3/ewcore:ewcore.so",
    ],
    imports = ["."],
    main = "mathutils_tests.py",
    python_version = "PY3",
    srcs_version = "PY3",
)
