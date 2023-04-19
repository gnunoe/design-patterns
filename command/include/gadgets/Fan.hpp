#ifndef COMMAND_INCLUDE_GADGETS_FAN_HPP
#define COMMAND_INCLUDE_GADGETS_FAN_HPP

#include <string>
#include <iostream>

enum class FanSpeed {
    OFF = -1,
    LOW = 0,
    MEDIUM = 1,
    HIGH = 2
};

class Fan {
public:

    Fan(const std::string& location)
        : location_(location) {};

    void low() {
        speed_ = FanSpeed::LOW;
        std::cout << location_ << " fan at low speed" << std::endl;
    }

    void medium() {
        speed_ = FanSpeed::MEDIUM;
        std::cout << location_ << " fan at medium speed" << std::endl;
    }

    void high() {
        speed_ = FanSpeed::HIGH;
        std::cout << location_ << " fan at high speed" << std::endl;
    }

    void off() {
        speed_ = FanSpeed::OFF;
        std::cout << location_ << " fan off" << std::endl;
    }

    FanSpeed get_speed(){
        return speed_;
    }

    void set_speed(FanSpeed speed) {
        switch (speed) {
            case FanSpeed::LOW:
                low();
                return;
            case FanSpeed::MEDIUM:
                medium();
                return;
            case FanSpeed::HIGH:
                high();
                return;
            case FanSpeed::OFF:
            default:
                off();
                return;
        }
    }

private:
    FanSpeed speed_ = FanSpeed::OFF;
    std::string location_;
};

#endif // COMMAND_INCLUDE_GADGETS_FAN_HPP