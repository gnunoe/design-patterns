#include <Coffee.hpp>
#include <Tea.hpp>
#include <CondimentDecorator.hpp>
#include <Milk.hpp>
#include <Mocha.hpp>

#include <cmath>
#include <memory>
#include <tuple>
#include <gtest/gtest.h>

class CoffeWithMilk : public ::testing::TestWithParam<std::tuple<Beverage::Size, double>> {};

TEST_P(CoffeWithMilk, CoffeWithMilk){
    auto params = GetParam();

    Beverage* beverage = new Coffee();
    beverage->setSize(std::get<0>(params));
    beverage = new Milk(beverage);

    ASSERT_EQ(std::get<1>(params), beverage->getCost());
};

INSTANTIATE_TEST_SUITE_P(
    CondimentedBeverage,
    CoffeWithMilk,
    ::testing::Values(
        std::make_tuple(Beverage::Size::Small, 1.30),
        std::make_tuple(Beverage::Size::Medium, 1.80),
        std::make_tuple(Beverage::Size::Large, 2.20)
    )
);

class TeaWithMilk : public ::testing::TestWithParam<std::tuple<Beverage::Size, double>> {};

TEST_P(TeaWithMilk, TeaWithMilk) {
    auto params = GetParam();

    Beverage* beverage = new Tea();
    beverage->setSize(std::get<0>(params));
    beverage = new Milk(beverage);

    ASSERT_TRUE(fabs(std::get<1>(params)-beverage->getCost()) < 0.000001);
}

INSTANTIATE_TEST_SUITE_P(
    CondimentedBeverage,
    TeaWithMilk,
    ::testing::Values(
        std::make_tuple(Beverage::Size::Small, 1.25),
        std::make_tuple(Beverage::Size::Medium, 1.50),
        std::make_tuple(Beverage::Size::Large, 1.7)
    )
);

class CoffeWithMilkAndDoubleMocha : public ::testing::TestWithParam<std::tuple<Beverage::Size, double>> {};

TEST_P(CoffeWithMilkAndDoubleMocha, CoffeWithMilkAndDoubleMocha) {
    auto params = GetParam();

    Beverage* beverage = new Coffee();
    beverage->setSize(std::get<0>(params));
    beverage = new Milk(beverage);
    beverage = new Mocha(beverage);
    beverage = new Mocha(beverage);
    
    ASSERT_EQ(std::get<1>(params), beverage->getCost());
}

INSTANTIATE_TEST_SUITE_P(
    CondimentedBeverage,
    CoffeWithMilkAndDoubleMocha,
    ::testing::Values(
        std::make_tuple(Beverage::Size::Small, 2.10),
        std::make_tuple(Beverage::Size::Medium, 2.60),
        std::make_tuple(Beverage::Size::Large, 3.00)
    )
);