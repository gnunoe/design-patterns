#ifndef COMMAND_INCLUDE_LIGHT_ON_COMMAND_HPP
#define COMMAND_INCLUDE_LIGHT_ON_COMMAND_HPP

#include <CommandInterface.hpp>
#include <gadgets/Light.hpp>

class LightOnCommand : public Command {
public:
    LightOnCommand(Light& light)
        : light_(&light) {};

    void execute() override {
        light_->on();
    };

    void undo() override {
        light_->off();
    };

private:
    Light* light_;
};

#endif // COMMAND_INCLUDE_LIGHT_ON_COMMAND_HPP
