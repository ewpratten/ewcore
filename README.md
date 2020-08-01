# ewcore ![Project](https://github.com/Ewpratten/ewcore/workflows/Project/badge.svg)
My core library for programming QOL

## Building

```sh
# Building the Python bindings
bazel build //bindings/python3/ewcore:ewcore.so

```

After building Python bindings, the resulting library can be found in `bazel-bin/bindings/python3/ewcore/`.