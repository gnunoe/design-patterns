#ifndef COMMAND_INCLUDE_GADGETS_DOOR_HPP
#define COMMAND_INCLUDE_GADGETS_DOOR_HPP

#include <string>
#include <iostream>

class Door {
public:
    Door(const std::string& location)
        : location_(location) {};

    void open() {
        std::cout << "Opening " << location_ << " door" << std::endl;
    }

    void close() {
        std::cout << "Closing " << location_ << " door" << std::endl;
    }

    void stop() {
        std::cout << "Stopping " << location_ << " door movement" << std::endl;
    }

private:
    std::string location_;
};

#endif // COMMAND_INCLUDE_GADGETS_DOOR_HPP