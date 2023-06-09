# A nice Makefile

## Basic Usage
1. Copy the Makefile into the root of your project directory
2. Put all your `*.c` and `*.h` files into `${PROJECT_DIR}/src`. Any folder structure within `src` will work completely fine.
3. Run `make`

## Details

This Makefile scans the source directory for `*.c` files, and creates object
files for each one in an `objs` directory. Then it compiles everything down
into a single binary.

We also create `objs/%.d` dependency files, which allow recompilation whenever
a header file is changed.

## Easily configurable parameters
- `CC`
- `EXTENSION`
- `CFLAGS`
- `LDFLAGS`
- `SOURCE_DIR`
- `BUILD_DIR`
- `TARGETS`

## Further extensions
- Add support for building into `.a` or `.so` library files
- Add `make install` and `make uninstall`, for installing and removing
  library and header files.
