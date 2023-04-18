#ifndef FACTORY_METHOD_INCLUDE_PIZZA_CHEESE_HPP
#define FACTORY_METHOD_INCLUDE_PIZZA_CHEESE_HPP

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

#endif //FACTORY_METHOD_INCLUDE_PIZZA_CHEESE_HPP
