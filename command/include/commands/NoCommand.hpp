#ifndef COMMAND_INCLUDE_NO_COMMAND_HPP
#define COMMAND_INCLUDE_NO_COMMAND_HPP

#include <CommandInterface.hpp>

class NoCommand : public Command {
public:
    void execute() override {};
    void undo() override {};
};

#endif // COMMAND_INCLUDE_NO_COMMAND_HPP
