#include <WeaponBehaviorInterface.hpp>
#include <GunBehavior.hpp>
#include <SwordBehavior.hpp>

#include <gtest/gtest.h>

TEST(WeaponBehavior, GunFromGunClass){
    GunBehavior* gun = new GunBehavior();
    testing::internal::CaptureStdout();
    gun->useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Shot with gun\n") << "Gun useWeapon was expected";
};

TEST(WeaponBehavior, SwordFromSwordClass){
    SwordBehavior* sword = new SwordBehavior();
    testing::internal::CaptureStdout();
    sword->useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Slice with sword\n") << "Sword useWeapon was expected";
};

TEST(WeaponBehavior, GunThenSwordFromWeaponClass){
    WeaponBehavior* weapon = new GunBehavior();
    testing::internal::CaptureStdout();
    weapon->useWeapon();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Shot with gun\n") << "Gun useWeapon was expected";

    weapon = new SwordBehavior();
    testing::internal::CaptureStdout();
    weapon->useWeapon();
    output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output,"Slice with sword\n") << "Sword useWeapon was expected";
};