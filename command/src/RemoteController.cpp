#include <RemoteController.hpp>
#include <commands/NoCommand.hpp>

#include <algorithm>

RemoteController::RemoteController() {
    Command* no_command = new NoCommand();
    for (uint i = 0; i < max_slot_capacity; i++) {
        set_on_command(i, *no_command);
        set_off_command(i, *no_command);
    }
    last_command_ = no_command;
}

void RemoteController::set_on_command(int slot, Command& command) {
    on_commands.at(slot) = &command;
}

void RemoteController::set_off_command(int slot, Command& command) {
    off_commands.at(slot) = &command;
}

void RemoteController::button_on_pressed(int slot) {
    on_commands.at(slot)->execute();
    save_last_command(on_commands.at(slot));
}

void RemoteController::button_off_pressed(int slot) {
    off_commands.at(slot)->execute();
    save_last_command(off_commands.at(slot));
}

Command* RemoteController::get_last_command() const {
    return last_command_;
}

void RemoteController::save_last_command(Command* cmd) {
    last_command_ = cmd;
}

void RemoteController::undo() {
    last_command_->undo();
    last_command_ = new NoCommand();
}

std::ostream& operator<<(std::ostream& os, RemoteController const& controller)
{
    os << "-- Remote Controller Slots -- " << std::endl;
    for (uint i = 0; i < max_slot_capacity; i++) {
        os << i << ": ";
        os << typeid(*controller.on_commands.at(i)).name() << " - ";
        os << typeid(*controller.off_commands.at(i)).name() << std::endl;
    }
    os << "undo : " << typeid(*controller.get_last_command()).name() << std::endl;
    return os;
}