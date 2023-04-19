#include <RemoteController.hpp>

#include <gadgets/Light.hpp>
#include <gadgets/Fan.hpp>
#include <gadgets/GarageDoor.hpp>

#include <commands/LightOnCommand.hpp>
#include <commands/LightOffCommand.hpp>
#include <commands/DoorOpenCommand.hpp>
#include <commands/DoorCloseCommand.hpp>
#include <commands/FanLowCommand.hpp>
#include <commands/FanMediumCommand.hpp>
#include <commands/FanHighCommand.hpp>
#include <commands/FanOffCommand.hpp>
#include <commands/MacroCommand.hpp>

#include <vector>

#include <gtest/gtest.h>

TEST(RemoteController, TestinSeveralSlots){

    // Slot distribution
    // 1: ON(GarageDoorOpen) OFF(GarageDoorClose)
    // 2: ON(GarageLightOn) OFF(GarageLightOff)
    // 3: ON(HallLigthOn) OFF(HallLigthOff)
    // 4: ON(HallFanHigh) OFF(HallFanOff)
    // 5: EMPTY
    // 6: EMPTY
    // 7: EMPTY

    auto controller = RemoteController();

    // Slot 1 & 2
    auto garage_door = GarageDoor("garage");
    auto garage_door_open = DoorOpenCommand(garage_door);
    auto garage_door_close = DoorCloseCommand(garage_door);
    controller.set_on_command(0, garage_door_open);
    controller.set_off_command(0, garage_door_close);

    auto garage_ligth_on = LightOnCommand(*garage_door.light());
    auto garage_ligth_off = LightOffCommand(*garage_door.light());
    controller.set_on_command(1, garage_ligth_on);
    controller.set_off_command(1, garage_ligth_off);

    // Slot 3
    auto hall_light = Light("hall");
    auto hall_light_on = LightOnCommand(hall_light);
    auto hall_light_off = LightOffCommand(hall_light);
    controller.set_on_command(2, hall_light_on);
    controller.set_off_command(2, hall_light_off);

    // Slot 4
    auto hall_fan = Fan("hall");
    auto hall_fan_on = FanHighCommand(hall_fan);
    auto hall_fan_off = FanOffCommand(hall_fan);
    controller.set_on_command(3, hall_fan_on);
    controller.set_off_command(3, hall_fan_off);

    // Print Remote Controller Configuration
    std::cout << controller << std::endl;

    // Testing
    auto press_button = [&controller](const std::string& mode, const int& slot){
        testing::internal::CaptureStdout();
        if (mode == "on") {
            controller.button_on_pressed(slot);
        } else if (mode == "off") {
            controller.button_off_pressed(slot);
        }
        std::string output = testing::internal::GetCapturedStdout();
        return output;
    };
    
    ASSERT_EQ(press_button("on", 0), "Opening garage door\n");
    ASSERT_EQ(press_button("off", 0), "Closing garage door\n");

    ASSERT_EQ(press_button("on", 1), "garage light on\n");
    ASSERT_EQ(press_button("off", 1), "garage light off\n");

    ASSERT_EQ(press_button("on", 2), "hall light on\n");
    ASSERT_EQ(press_button("off", 2), "hall light off\n");

    ASSERT_EQ(press_button("on", 3), "hall fan at high speed\n");
    ASSERT_EQ(press_button("off", 3), "hall fan off\n");

    ASSERT_EQ(press_button("on", 4), "");
    ASSERT_EQ(press_button("off", 4), "");

    ASSERT_EQ(press_button("on", 5), "");
    ASSERT_EQ(press_button("off", 5), "");

    ASSERT_EQ(press_button("on", 6), "");
    ASSERT_EQ(press_button("off", 6), "");
};

TEST(RemoteController, UndoButton){

    // Slot distribution
    // 1: ON(GarageDoorOpen) OFF(GarageDoorClose)
    // 2: EMPTY
    // 3: EMPTY
    // 4: EMPTY
    // 5: EMPTY
    // 6: EMPTY
    // 7: EMPTY

    auto controller = RemoteController();

    // Slot 1
    auto garage_door = GarageDoor("garage");
    auto garage_door_open = DoorOpenCommand(garage_door);
    auto garage_door_close = DoorCloseCommand(garage_door);
    controller.set_on_command(0, garage_door_open);
    controller.set_off_command(0, garage_door_close);

    // Print Remote Controller Configuration
    std::cout << controller << std::endl;

    // Testing
    auto press_button = [&controller](const std::string& mode, const int& slot){
        testing::internal::CaptureStdout();
        if (mode == "on") {
            controller.button_on_pressed(slot);
        } else if (mode == "off") {
            controller.button_off_pressed(slot);
        } else if (mode == "undo") {
            controller.undo();
        }
        std::string output = testing::internal::GetCapturedStdout();
        return output;
    };
    
    ASSERT_EQ(press_button("on", 0), "Opening garage door\n");
    ASSERT_EQ(press_button("off", 0), "Closing garage door\n");
    ASSERT_EQ(press_button("undo", -1), "Opening garage door\n");

    ASSERT_EQ(press_button("off", 0), "Closing garage door\n");
    ASSERT_EQ(press_button("on", 0), "Opening garage door\n");
    ASSERT_EQ(press_button("undo", -1), "Closing garage door\n");

};

TEST(RemoteController, UndoButtonWithState){

    // Slot distribution
    // 1: ON(HallFanHigh) OFF(HallFanOff)
    // 2: ON(HallFanMedium) OFF(HallFanOff)
    // 3: EMPTY
    // 4: EMPTY
    // 5: EMPTY
    // 6: EMPTY
    // 7: EMPTY

    auto controller = RemoteController();

    // Slot 1
    auto hall_fan = Fan("hall");
    auto hall_fan_high = FanHighCommand(hall_fan);
    auto hall_fan_low = FanLowCommand(hall_fan);
    auto hall_fan_off = FanOffCommand(hall_fan);
    controller.set_on_command(0, hall_fan_high);
    controller.set_off_command(0, hall_fan_off);
    controller.set_on_command(1, hall_fan_low);
    controller.set_off_command(1, hall_fan_off);

    // Print Remote Controller Configuration
    std::cout << controller << std::endl;

    // Testing
    auto press_button = [&controller](const std::string& mode, const int& slot){
        testing::internal::CaptureStdout();
        if (mode == "on") {
            controller.button_on_pressed(slot);
        } else if (mode == "off") {
            controller.button_off_pressed(slot);
        } else if (mode == "undo") {
            controller.undo();
        }
        std::string output = testing::internal::GetCapturedStdout();
        return output;
    };
    
    ASSERT_EQ(press_button("on", 0), "hall fan at high speed\n");
    ASSERT_EQ(press_button("off", 0), "hall fan off\n");
    ASSERT_EQ(press_button("undo", -1), "hall fan at high speed\n");

    ASSERT_EQ(press_button("on", 1), "hall fan at low speed\n");
    ASSERT_EQ(press_button("off", 1), "hall fan off\n");
    ASSERT_EQ(press_button("undo", -1), "hall fan at low speed\n");

};

TEST(RemoteController, MacroCommand){

    // Slot distribution
    // 1: ON(InsideHome) OFF(OutsideHome)
    // 2: EMPTY
    // 3: EMPTY
    // 4: EMPTY
    // 5: EMPTY
    // 6: EMPTY
    // 7: EMPTY

    auto controller = RemoteController();

    // Command pieces
    auto hall_light = Light("hall");
    auto hall_light_on = LightOnCommand(hall_light);
    auto hall_light_off = LightOffCommand(hall_light);

    auto hall_fan = Fan("hall");
    auto hall_fan_high = FanHighCommand(hall_fan);
    auto hall_fan_off = FanOffCommand(hall_fan);

    std::vector<Command*> inside_home_actions {&hall_light_on, &hall_fan_high};
    std::vector<Command*> outside_home_actions {&hall_light_off, &hall_fan_off};

    // Slot 1 Macro Command

    MacroCommand inside_home = MacroCommand(inside_home_actions);
    MacroCommand outside_home = MacroCommand(outside_home_actions);
    controller.set_on_command(0, inside_home);
    controller.set_off_command(0, outside_home);

    // Print Remote Controller Configuration
    std::cout << controller << std::endl;

    // Testing
    auto press_button = [&controller](const std::string& mode, const int& slot){
        testing::internal::CaptureStdout();
        if (mode == "on") {
            controller.button_on_pressed(slot);
        } else if (mode == "off") {
            controller.button_off_pressed(slot);
        } else if (mode == "undo") {
            controller.undo();
        }
        std::string output = testing::internal::GetCapturedStdout();
        return output;
    };
    
    ASSERT_EQ(press_button("on", 0), "hall light on\nhall fan at high speed\n");
    ASSERT_EQ(press_button("off", 0), "hall light off\nhall fan off\n");
    ASSERT_EQ(press_button("undo", -1), "hall light on\nhall fan at high speed\n");

};
