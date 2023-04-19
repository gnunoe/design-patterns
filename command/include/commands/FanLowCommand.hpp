#ifndef COMMAND_INCLUDE_FAN_LOW_COMMAND_HPP
#define COMMAND_INCLUDE_FAN_LOW_COMMAND_HPP

#include <CommandInterface.hpp>
#include <gadgets/Fan.hpp>

class FanLowCommand : public Command {
public:
    FanLowCommand(Fan& fan)
        : fan_(&fan) {};

    void execute() override {
        prev_speed_ = fan_->get_speed();
        fan_->low();
    };

    void undo() override {
        fan_->set_speed(prev_speed_);
    };

private:
    Fan* fan_;
    FanSpeed prev_speed_;
};

#endif // COMMAND_INCLUDE_FAN_LOW_COMMAND_HPP
