# Design Patterns
Desing patterns implementation in C++.

Based on the book Head First Design Patterns Second Edition, work done
with the sole purpose of improving the learning experience while reading
it.

## Patterns

* Strategy: defines a family of alogrithms, encapsulates each one, and makes
them interchangeable. Strategy lets the algorithm vary independently from
clients that use it.

## Dependencies
* gtest: included as submodule

## Compile and run

```bash
git submodule update --init --recursive
mkdir build && cd build
cmake ..
make
```
