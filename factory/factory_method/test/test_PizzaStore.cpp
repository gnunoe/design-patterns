#include <stores/NYPizzaStore.hpp>
#include <stores/ChicagoPizzaStore.hpp>

#include <cmath>
#include <memory>
#include <tuple>
#include <gtest/gtest.h>

TEST(NYPizzaStore, NYPeperoniPizza){
    NYPizzaStore store = NYPizzaStore();
    std::string pizza_name = "Peperoni";

    auto pizza = store.order_pizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());

    const auto& toppings = pizza->get_toppings();
    auto it = std::find_if(std::begin(toppings), std::end(toppings), [](const std::string& topping) {
        return topping == "Salsa Mariana";
    });
    ASSERT_NE(std::end(toppings), it);
};

TEST(ChicagoPizzaStore, ChicagoPeperoniPizza){
    ChicagoPizzaStore store = ChicagoPizzaStore();
    std::string pizza_name = "Peperoni";

    auto pizza = store.order_pizza(pizza_name);

    ASSERT_NE(nullptr, pizza);
    ASSERT_EQ(pizza_name, pizza->get_name());

    const auto& toppings = pizza->get_toppings();
    auto it = std::find_if(std::begin(toppings), std::end(toppings), [](const std::string& topping) {
        return topping == "Tomato plum sauce";
    });
    ASSERT_NE(std::end(toppings), it);
};
