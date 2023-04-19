#ifndef COMMAND_INCLUDE_GADGETS_LIGHT_HPP
#define COMMAND_INCLUDE_GADGETS_LIGHT_HPP

#include <string>
#include <iostream>

class Light {
public:
    Light(const std::string& location)
        : location_(location) {};

    void on() {
        std::cout << location_ << " light on" << std::endl;
    }

    void off() {
        std::cout << location_ << " light off" << std::endl;
    }

private:
    std::string location_;
};

#endif // COMMAND_INCLUDE_GADGETS_LIGHT_HPP