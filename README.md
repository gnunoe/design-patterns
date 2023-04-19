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

* Factory:
    * Simple Factory: is not a pattern, but a programming idiom.
    * Factory Method: defines an interface for creating an object, but lets
    subclasses decide which class to instantiate.
    It lets a class defer instantiation to subclasses, relying on inheritance.
    * Abstract Factory: provides an interface for creating families of related/dependent
    objects without specifying their concrete classes. Relies on object composition.

* Singleton: ensures a class has only one instance, and provides a global
point of accesing it.

* Command: encapsulates a request as an object, thereby letting you parameterize other
objects with different requests, queue or log requests, and support undoable operations.
Use it when you need to decouple an object making a request from the object that knows
how to perform the request.

* Null Object: useful when you we don't have a meaningful object to return, and yet we
want to remove responsability for handling null from the client. We therefore create a
dummy null object and initialize the required structures with it.

## Object Oriented Principles

* Encapsulate what varies
* Favor composition over inheritance
* Program to interfaces, not implementations
* Strive for loosely coupled designs between objects that interact
* Classes should be open for extension but closed for modification
* Dependecy inversion: Depend upon abstractions. Do not depend upon concrete classes.
(High level components should not depend upon low level components: both should depend upon abstractions). The guidelines to follow this principle follows:
    * No variable should hold a reference to a concrete class: if you use new, you will be holding a referece to a concrete class
    * No class should derive from a concrete class: derive from an abtraction or an interface
    * No method should override any implemented method of its base classes

## Dependencies
* gtest: included as submodule

## Compile and run

```bash
git submodule update --init --recursive
mkdir build && cd build
cmake ..
make
```
