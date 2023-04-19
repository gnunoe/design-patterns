#include<CommandInterface.hpp>

#ifndef COMMAND_INCLUDE_REMOTE_CONTROLLER_HPP
#define COMMAND_INCLUDE_REMOTE_CONTROLLER_HPP

#include <array>
#include <iostream>

const int max_slot_capacity = 7;

class RemoteController {
public:

    RemoteController();

    std::array<Command*, max_slot_capacity> on_commands;
    std::array<Command*, max_slot_capacity> off_commands;

    void set_on_command(int slot, Command& command);
    void set_off_command(int slot, Command& command);
    void button_on_pressed(int slot);
    void button_off_pressed(int slot);

    void undo();

    Command* get_last_command() const;

private:
    void save_last_command(Command* cmd);
    Command* last_command_;
};

std::ostream& operator<<(std::ostream& os, RemoteController const& controller);

#endif // COMMAND_INCLUDE_REMOTE_CONTROLLER_HPP