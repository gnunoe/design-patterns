#ifndef COMMAND_INCLUDE_LIGHT_OFF_COMMAND_HPP
#define COMMAND_INCLUDE_LIGHT_OFF_COMMAND_HPP

#include <CommandInterface.hpp>
#include <gadgets/Light.hpp>

class LightOffCommand : public Command {
public:
    LightOffCommand(Light& light)
        : light_(&light) {};

    void execute() override {
        light_->off();
    };

    void undo() override {
        light_->on();
    };

private:
    Light* light_;
};

#endif // COMMAND_INCLUDE_LIGHT_OFF_COMMAND_HPP
