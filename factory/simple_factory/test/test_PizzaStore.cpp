#include <SimplePizzaFactory.hpp>
#include <PizzaStore.hpp>

#include <cmath>
#include <memory>
#include <tuple>
#include <gtest/gtest.h>


TEST(PizzaStore, PeperoniPizza){
    SimplePizzaFactory factory;
    PizzaStore store = PizzaStore(factory);
    std::string pizza_name = "Peperoni";

    auto pizza = store.order_pizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());
};

TEST(PizzaStore, CheesePizza){
    SimplePizzaFactory factory;
    PizzaStore store = PizzaStore(factory);
    std::string pizza_name = "Cheese";

    auto pizza = store.order_pizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());
};

TEST(PizzaStore, NotSupportedPizza){
    SimplePizzaFactory factory;
    PizzaStore store = PizzaStore(factory);
    std::string pizza_name = "Stones";

    auto pizza = store.order_pizza(pizza_name);

    ASSERT_EQ(nullptr, pizza);
};