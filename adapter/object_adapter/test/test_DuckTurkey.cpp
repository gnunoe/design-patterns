#include <ducks/MaillardDuck.hpp>
#include <turkeys/WildTurkey.hpp>
#include <TurkeyAdapter.hpp>

#include <iostream>

#include <gtest/gtest.h>

auto test_duck = [](Duck* duck) {
    testing::internal::CaptureStdout();
    duck->quack();
    duck->fly();
    std::string output = testing::internal::GetCapturedStdout();
    return output;
};

auto test_turkey = [](Turkey* turkey) {
    testing::internal::CaptureStdout();
    turkey->gooble();
    turkey->fly();
    std::string output = testing::internal::GetCapturedStdout();
    return output;
};

TEST(Duck, QuackAndFly){

    auto maillard_duck = new MaillardDuck();
    ASSERT_EQ(test_duck(maillard_duck), "Quack\nI'm flying\n");
};

TEST(Turkey, GoobleAndFly){

    auto wild_turkey = new WildTurkey();
    ASSERT_EQ(test_turkey(wild_turkey), "Gooble gooble\nI'm flying for a short distance\n");
};

TEST(TurkeyAdapter, TurkeyThatQuackAndFly){

    auto wild_turkey = new WildTurkey();
    auto wild_turkey_duck = new TurkeyAdapter(wild_turkey);
    auto result = "Gooble gooble\nI'm flying for a short distance\n" \
                                  "I'm flying for a short distance\n" \
                                  "I'm flying for a short distance\n" \
                                  "I'm flying for a short distance\n" \
                                  "I'm flying for a short distance\n";
    ASSERT_EQ(test_duck(wild_turkey_duck), result);
};
