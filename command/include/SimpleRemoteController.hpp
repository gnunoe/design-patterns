#include<CommandInterface.hpp>

#ifndef COMMAND_INCLUDE_SIMPLE_REMOTE_CONTROLLER_HPP
#define COMMAND_INCLUDE_SIMPLE_REMOTE_CONTROLLER_HPP


class SimpleRemoteController {
public:
    Command* slot;

    void set_command(Command& command);
    void button_pressed();
};

#endif // COMMAND_INCLUDE_SIMPLE_REMOTE_CONTROLLER_HPP