#ifndef COMMAND_INCLUDE_DOOR_CLOSE_COMMAND_HPP
#define COMMAND_INCLUDE_DOOR_CLOSE_COMMAND_HPP

#include <CommandInterface.hpp>
#include <gadgets/Door.hpp>

class DoorCloseCommand : public Command {
public:
    DoorCloseCommand(Door& door)
        : door_(&door) {};

    void execute() override {
        door_->close();
    };

    void undo() override {
        door_->open();
    };

private:
    Door* door_;
};

#endif // COMMAND_INCLUDE_DOOR_CLOSE_COMMAND_HPP
