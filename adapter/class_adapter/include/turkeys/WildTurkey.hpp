#ifndef ADAPTER_INCLUDE_WILD_TURKEY_HPP
#define ADAPTER_INCLUDE_WILD_TURKEY_HPP

#include <TurkeyInterface.hpp>

#include <iostream>

class WildTurkey : public Turkey {
public:
    void gooble() override {
        std::cout << "Gooble gooble" << std::endl;
    };
    void fly() override {
        std::cout << "I'm flying for a short distance" << std::endl;
    };
};

#endif // ADAPTER_INCLUDE_WILD_TURKEY_HPP
