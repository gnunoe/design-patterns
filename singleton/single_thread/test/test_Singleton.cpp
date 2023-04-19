#include <Singleton.hpp>

#include <gtest/gtest.h>

TEST(Singleton, Test){

    auto singleton1 = Singleton::getInstance("1");
    ASSERT_EQ("1", singleton1->name());

    auto singleton2 = Singleton::getInstance("2");
    ASSERT_EQ("1", singleton2->name());
};
