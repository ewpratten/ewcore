load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

# filegroup(
#     name="hdrs",
#     srcs=glob(["*.hh"]),
#     visibility = ["//visibility:public"],
# )

cc_library(
    name = "math",
    visibility = ["//visibility:public"],
    deps = [
        ":mathutils",
        ":measurement",
    ],
)

cc_library(
    name = "mathutils",
    srcs = ["mathutils.cc"],
    hdrs = ["mathutils.hh"],
    includes = ["./"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "measurement",
    srcs = ["measurement.cc"],
    hdrs = ["measurement.hh"],
    includes = ["./"],
    visibility = ["//visibility:public"],
)

test_suite(
    name = "test",
    tests = [
        ":mathutils_test",
        ":measurement_test",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "mathutils_test",
    srcs = ["mathutils_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        ":mathutils",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "measurement_test",
    srcs = ["measurement_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        ":mathutils",
        ":measurement",
        "@gtest//:gtest_main",
    ],
)
