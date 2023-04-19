#ifndef COMMAND_INCLUDE_MACRO_COMMAND_HPP
#define COMMAND_INCLUDE_MACRO_COMMAND_HPP

#include <CommandInterface.hpp>

#include <algorithm>
#include <vector>

class MacroCommand : public Command {
public:
    MacroCommand(std::vector<Command*>& commands)
        : commands_(commands) {};

    void execute() override {
        std::for_each(commands_.begin(), commands_.end(), [](auto& cmd){
            cmd->execute();
        });
    };

    void undo() override {
        std::for_each(commands_.begin(), commands_.end(), [](auto& cmd){
            cmd->undo();
        });
    };

private:
    std::vector<Command*> commands_;
};

#endif // COMMAND_INCLUDE_MACRO_COMMAND_HPP
