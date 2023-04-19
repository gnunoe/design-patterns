#ifndef COMMAND_INCLUDE_DOOR_OPEN_COMMAND_HPP
#define COMMAND_INCLUDE_DOOR_OPEN_COMMAND_HPP

#include <CommandInterface.hpp>
#include <gadgets/Door.hpp>

class DoorOpenCommand : public Command {
public:
    DoorOpenCommand(Door& door)
        : door_(&door) {};

    void execute() override {
        door_->open();
    };

    void undo() override {
        door_->close();
    };

private:
    Door* door_;
};

#endif // COMMAND_INCLUDE_DOOR_OPEN_COMMAND_HPP
