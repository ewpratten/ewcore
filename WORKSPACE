workspace(name = "ewcore")

# Imports
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

##### Versioning Info #####

# Version of the pybind11 library to load
PYBIND11_VERSION = "2.5.0"

# Version of the pybind11 bazel bindings to load
PYBIND11_BAZEL_VERSION = "203508e14aab7309892a1c5f7dd05debda22d9a5"

GOOGLETEST_VERSION = "1.10.0"

##### External Dependancies #####

## Pybind11 wrapper
http_archive(
    name = "pybind11_bazel",
    strip_prefix = "pybind11_bazel-{commit}".format(commit = PYBIND11_BAZEL_VERSION),
    urls = ["https://github.com/pybind/pybind11_bazel/archive/{commit}.zip".format(commit = PYBIND11_BAZEL_VERSION)],
)

## Pybind11 library
http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11.BUILD",
    strip_prefix = "pybind11-{version}".format(version = PYBIND11_VERSION),
    urls = ["https://github.com/pybind/pybind11/archive/v{version}.tar.gz".format(version = PYBIND11_VERSION)],
)

# Configure pybind
load("@pybind11_bazel//:python_configure.bzl", "python_configure")

python_configure(
    name = "local_config_python",
    python_version = "3",
)

## GoogleTest ##

http_archive(
    name = "gtest",
    strip_prefix = "googletest-release-{version}".format(version = GOOGLETEST_VERSION),
    urls = ["https://github.com/google/googletest/archive/release-{version}.tar.gz".format(version = GOOGLETEST_VERSION)],
)

# git_repository(
#     name = "gtest",
#     remote = "https://github.com/google/googletest",
#     tag = "release-1.8.0",
# )
