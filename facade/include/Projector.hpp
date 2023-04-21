#ifndef FACADE_INCLUDE_PROJECTOR_HPP
#define FACADE_INCLUDE_PROJECTOR_HPP

#include <iostream>

class Projector {
public:
    void on() {
        std::cout << "Switch on projector" << std::endl;
    };
    void off() {
        std::cout << "Switch off projector" << std::endl;
    };
    void wideScreenMode() {
        std::cout << "Setting projector to widescreen" << std::endl;
    };
};

#endif // FACADE_INCLUDE_PROJECTOR_HPP
