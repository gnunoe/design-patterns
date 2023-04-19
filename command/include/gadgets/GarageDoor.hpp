#ifndef COMMAND_INCLUDE_GADGETS_GARAGE_DOOR_HPP
#define COMMAND_INCLUDE_GADGETS_GARAGE_DOOR_HPP

#include <gadgets/Door.hpp>
#include <gadgets/Light.hpp>

#include <string>
#include <iostream>

class GarageDoor : public Door {
public:
    GarageDoor(const std::string& location)
        : Door(location)
        , light_(Light("garage")) {};

    void ligth_on() {
        light_.on();
    }

    void ligth_off() {
        light_.off();
    }

    Light* light() {
        return &light_;
    }

private:
    Light light_;

};

#endif // COMMAND_INCLUDE_GADGETS_GARAGE_DOOR_HPP