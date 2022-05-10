# A nice makefile

This Makefile scans the source directory for `*.c` files, and creates object
files for each one in an `objs` directory. Then it compiles everything down
into a single binary.

## Further extensions
- Add support for building into `.a` or `.so` library files
- Add `make install` and `make uninstall`, for installing and removing
  library and header files.
