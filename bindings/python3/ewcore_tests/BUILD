load("@rules_python//python:defs.bzl", "py_test")

test_suite(
    name = "test",
    tests = [
        ":math_tests",
    ],
    visibility = ["//visibility:public"],
)

py_test(
    name = "math_tests",
    srcs = ["math_tests.py"],
    data = [
        "//bindings/python3/ewcore:ewcore.so",
    ],
    imports = ["."],
    main = "math_tests.py",
    python_version = "PY3",
    srcs_version = "PY3",
)
