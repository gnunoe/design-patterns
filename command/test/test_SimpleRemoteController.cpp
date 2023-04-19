#include <SimpleRemoteController.hpp>

#include <gadgets/Light.hpp>
#include <gadgets/GarageDoor.hpp>

#include <commands/LightOnCommand.hpp>
#include <commands/DoorOpenCommand.hpp>

#include <gtest/gtest.h>

TEST(SimpleRemoteController, LightOnCommand){

    auto hall_light = Light("hall");
    auto hall_light_on = LightOnCommand(hall_light);

    auto controller = SimpleRemoteController();
    controller.set_command(hall_light_on);

    testing::internal::CaptureStdout();
    controller.button_pressed();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "hall light on\n");
};

TEST(SimpleRemoteController, DoorOpenCommand){

    auto garage_door = GarageDoor("garage");
    auto garage_ligth_on = LightOnCommand(*garage_door.light());
    auto garage_door_open = DoorOpenCommand(garage_door);

    auto controller = SimpleRemoteController();
    controller.set_command(garage_ligth_on);

    testing::internal::CaptureStdout();
    controller.button_pressed();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "garage light on\n");

    controller.set_command(garage_door_open);

    testing::internal::CaptureStdout();
    controller.button_pressed();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "Opening garage door\n");
};

