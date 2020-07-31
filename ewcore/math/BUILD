load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

# filegroup(
#     name="hdrs",
#     srcs=glob(["*.hh"]),
#     visibility = ["//visibility:public"],
# )

cc_library(
    name="math",
    deps=[":mathutils"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "mathutils",
    srcs = ["mathutils.cc"],
    hdrs = ["mathutils.hh"],
    includes = ["./"],
    visibility = ["//visibility:public"],
)

cc_test(
    name="mathutils_test",
    srcs=["mathutils_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:gtest_main",
        ":mathutils",
    ],
)