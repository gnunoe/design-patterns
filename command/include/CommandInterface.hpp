#ifndef COMMAND_INCLUDE_COMMAND_INTERFACE_HPP
#define COMMAND_INCLUDE_COMMAND_INTERFACE_HPP

class Command {
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // COMMAND_INCLUDE_COMMAND_INTERFACE_HPP
