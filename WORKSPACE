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

## Python ##

http_archive(
    name = "rules_python",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.0.2/rules_python-0.0.2.tar.gz",
    strip_prefix = "rules_python-0.0.2",
    sha256 = "b5668cde8bb6e3515057ef465a35ad712214962f0b3a314e551204266c7be90c",
)

load("@rules_python//python:pip.bzl", "pip_repositories")
pip_repositories()

## Packaging ##

http_archive(
    name = "rules_pkg",
    url = "https://github.com/bazelbuild/rules_pkg/releases/download/0.2.5/rules_pkg-0.2.5.tar.gz",
    sha256 = "352c090cc3d3f9a6b4e676cf42a6047c16824959b438895a76c2989c6d7c246a",
)
load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")
rules_pkg_dependencies()