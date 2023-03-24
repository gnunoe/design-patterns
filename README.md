# Design Patterns
Desing patterns implementation in C++.

Based on the book Head First Design Patterns Second Edition, work done
with the sole purpose of improving the learning experience while reading
it.

## Patterns

* Strategy: defines a family of alogrithms, encapsulates each one, and makes
them interchangeable. Strategy lets the algorithm vary independently from
clients that use it.

* Observer: defines a one-to-many dependencies between objects so that when
one object changes state, all its dependants are notified and updated
automatically

* Decorator: attaches additional responsabilities to an object dynamically.
They provide a flexible alternative to subclassing for extending functionality.

## Dependencies
* gtest: included as submodule

## Compile and run

```bash
git submodule update --init --recursive
mkdir build && cd build
cmake ..
make
```
