#include<SimpleRemoteController.hpp>

void SimpleRemoteController::set_command(Command& command) {
    slot = &command;
};

void SimpleRemoteController::button_pressed() {
    slot->execute();
};
