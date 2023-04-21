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

* Adapter: converts the interface of a class into another interface the client expects.
It lets classes work together that couldn't otherwise because of incompatible interfaces.
    * Object Adapter: uses composition to adapt the adaptee to the client (by implementing
    the interface the client expects, and holding an instance of the adaptee object)
    * Class Adapter: uses multiple inheritance to adapt the adaptee to the client (by
    inheriting from the the interface the cient expect and from the concrete class of the adaptee)

* Facade: provides a unified interface to a set of interfaces in a subsystem. It defines a
higher-level interface that makes the subsystem easier to use.

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
* Least knowledge: talk only to your inmediate friends.
(Be carefull with the number of classes an object depends on and how it interact with them, to avoid coupled designs that will create system cascade changes)
To follow this principle follows, invokes only method that belong to:
    * The object itself
    * Objects passed in as parameters to the method
    * Objects created or instantiated within the class
    * Components of the object (that is, objects with a HAS-A relationship)

## Dependencies
* gtest: included as submodule

## Compile and run

```bash
git submodule update --init --recursive
mkdir build && cd build
cmake ..
make
```
