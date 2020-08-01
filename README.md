# ewcore [![Project](https://github.com/Ewpratten/ewcore/workflows/Project/badge.svg)](https://github.com/Ewpratten/ewcore/actions)
My core library for programming quality-of-life

## Why does this exist

I find myself rewriting the same utility files over and over in nearly every project I work on. The goal of ewcore is to create a single implementation of all of these files, and create language bindings to use them in my most commonly used programming languages.

## Development

This project uses [Bazel](https://bazel.build). Make sure to have a recent version installed.

### Building

To build the entire project, use the following command:
```sh
bazel build //:all
```

Each package can be built individually as you would any other Bazel project.

### Testing

To test the entire project, use the following command:
```sh
bazel test //:test
```

Each package can be tested individually as you would any other Bazel project.

### Packaging
*packaging is WIP*