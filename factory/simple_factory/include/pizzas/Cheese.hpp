#ifndef SIMPLE_FACTORY_INCLUDE_PIZZA_CHEESE_HPP
#define SIMPLE_FACTORY_INCLUDE_PIZZA_CHEESE_HPP

#include <PizzaInterface.hpp>

class Cheese: public Pizza {
public:
    Cheese(PizzaSize size = PizzaSize::Medium, PizzaDough dough = PizzaDough::Regular);
    
    static const std::string name;
    std::list<std::string> toppings = {
        "Fresh Mozzarella",
        "Parmesan",
        "Granna Padano"
    };
};

#endif //SIMPLE_FACTORY_INCLUDE_PIZZA_CHEESE_HPP
