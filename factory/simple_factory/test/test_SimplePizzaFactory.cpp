#include <SimplePizzaFactory.hpp>

#include <cmath>
#include <memory>
#include <tuple>
#include <gtest/gtest.h>


TEST(PizzaFactory, PeperoniPizza){
    SimplePizzaFactory factory;
    
    std::string pizza_name = "Peperoni";

    auto pizza = factory.createPizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());
};

TEST(PizzaFactory, CheesePizza){
    SimplePizzaFactory factory;
    std::string pizza_name = "Cheese";

    auto pizza = factory.createPizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());
};

TEST(PizzaFactory, NotSupportedPizza){
    SimplePizzaFactory factory;
    std::string pizza_name = "Stones";

    auto pizza = factory.createPizza(pizza_name);

    ASSERT_EQ(nullptr, pizza);
};