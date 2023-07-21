#include <CaffeineBeverage.hpp>
#include <Coffee.hpp>
#include <Tea.hpp>

#include <gtest/gtest.h>

TEST(CaffeineBeverage, Coffee){
    auto coffee = new Coffee();
    testing::internal::CaptureStdout();
    coffee->prepareRecipe();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_TRUE(output.find("Coffee") != std::string::npos) << "Expected Coffee Brew";
};

TEST(CaffeineBeverage, Tea){
    auto tea = new Tea();
    testing::internal::CaptureStdout();
    tea->prepareRecipe();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_TRUE(output.find("Tea") != std::string::npos) << "Expected Tea Brew";
};
