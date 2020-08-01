load("@rules_python//python:defs.bzl", "py_test")

test_suite(
    name = "test",
    tests = [
        ":mathutils_test",
        ":measurement_test",
    ],
    visibility = ["//visibility:public"],
)

py_test(
    name = "mathutils_test",
    srcs = ["mathutils_test.py"],
    data = [
        "//bindings/python3/ewcore:ewcore.so",
    ],
    imports = ["."],
    main = "mathutils_test.py",
    python_version = "PY3",
    srcs_version = "PY3",
)

py_test(
    name = "measurement_test",
    srcs = ["measurement_test.py"],
    data = [
        "//bindings/python3/ewcore:ewcore.so",
    ],
    imports = ["."],
    main = "measurement_test.py",
    python_version = "PY3",
    srcs_version = "PY3",
)
