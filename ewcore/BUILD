load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_test")
# load("@rules_pkg//:pkg.bzl", "pkg_tar")

# pkg_tar(
#     name = "ewcore",
#     srcs = [":ewcore-lib"],
#     extension = "tar.gz",
# )

# pkg_tar(
#     name = "ewcore_libs",
#     srcs = [":ewcore.so"],
#     package_dir = "/lib",
# )

# pkg_tar(
#     name = "ewcore_hdrs",
#     data = glob(["**/*.hh"]),
#     package_dir = "/include",
# )

# filegroup(
#     name = "ewcore_files",
#     srcs = [
#         ":ewcore.so",
#         "//ewcore/math:hdrs"
#     ],
# )

cc_binary(
    name = "ewcore.so",
    linkshared = True,
    deps = ["//ewcore/math"],
    visibility = ["//visibility:public"],
)

test_suite(
    name = "test",
    tests = ["//ewcore/math:test"],
    visibility = ["//visibility:public"],
)

# cc_import(
#     name = "ewcore-lib",
#     hdrs=["//ewcore/math:hdrs"],
#     shared_library=":ewcore.so"
# )
