#include <Beverage.hpp>
#include <Coffee.hpp>
#include <Tea.hpp>

#include <memory>
#include <tuple>
#include <gtest/gtest.h>

using beverage_ptr = std::shared_ptr<Beverage>;

class SimpleBeverage : public ::testing::TestWithParam<std::tuple<beverage_ptr, std::string, double>> {};

TEST_P(SimpleBeverage, Test){
    auto params = GetParam();

    auto beverage = std::get<0>(params);
    ASSERT_EQ(std::get<1>(params), beverage->getDescription());
    ASSERT_EQ(std::get<2>(params), beverage->getCost());
};

INSTANTIATE_TEST_SUITE_P(
    Beverage,
    SimpleBeverage,
    ::testing::Values(
        std::make_tuple(beverage_ptr(new Coffee()), "Black Coffee", 1.10),
        std::make_tuple(beverage_ptr(new Tea()), "Tea", 1.05)
    )
);
