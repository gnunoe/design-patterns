#ifndef ADAPTER_INCLUDE_MAILLARD_DUCK_HPP
#define ADAPTER_INCLUDE_MAILLARD_DUCK_HPP

#include <DuckInterface.hpp>

#include <iostream>

class MaillardDuck : public Duck {
public:
    void quack() override {
        std::cout << "Quack" << std::endl;
    };
    void fly() override {
        std::cout << "I'm flying" << std::endl;
    };
};

#endif // ADAPTER_INCLUDE_MAILLARD_DUCK_HPP
