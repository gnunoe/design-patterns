#include <Character.hpp>
#include <King.hpp>
#include <Archer.hpp>
#include <SwordBehavior.hpp>
#include <GunBehavior.hpp>

#include <gtest/gtest.h>

TEST(CharacterGreetings, KingFromKingClass){
    King* Alfred = new King();
    testing::internal::CaptureStdout();
    Alfred->greetings();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Your Majesty\n") << "King's greeting was not expected";
};

TEST(CharacterGreetings, ArcherFromArcherClass){
    Archer* Legolas = new Archer();
    testing::internal::CaptureStdout();
    Legolas->greetings();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Elf Legolas\n") << "Archer's greeting was not expected";
};

TEST(CharacterGreetings, KingThenArcherFromCharacterClass){
    Character* ch1 = new King();
    testing::internal::CaptureStdout();
    ch1->greetings();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Your Majesty\n") << "King's greeting was not expected";

    ch1 = new Archer();
    testing::internal::CaptureStdout();
    ch1->greetings();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Elf Legolas\n") << "Archer's greeting was not expected";
}

TEST(CharacterWeapon, ChangeWeaponOnRuntime){
    King* Alfred = new King();
    Alfred->setWeapon(new SwordBehavior());
    testing::internal::CaptureStdout();
    Alfred->useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Slice with sword\n") << "King's useWeapon was not expected";

    // Change weapon
    Alfred->setWeapon(new GunBehavior());
    testing::internal::CaptureStdout();
    Alfred->useWeapon();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Shot with gun\n") << "King's useWeapon was not expected";
};