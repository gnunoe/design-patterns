#ifndef FACADE_INCLUDE_LIGHTS_HPP
#define FACADE_INCLUDE_LIGHTS_HPP

#include <iostream>

class Lights {
public:
    void on() {
        level_ = 100;
        std::cout << "Switch on Lights" << std::endl;
    };
    void off() {
        level_ = 0;
        std::cout << "Switch off Lights" << std::endl;
    };
    void dim(uint level) {
        if (level < 0) {
            off();
        } else if (level > 100) {
            on();
        } else {
            level_ = level;
            std::cout << "Dim Lights to " << level << std::endl;
        }   
    };

private:
    uint level_;
};

#endif // FACADE_INCLUDE_LIGHTS_HPP
