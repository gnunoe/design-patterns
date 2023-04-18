#ifndef FACTORY_METHOD_INCLUDE_PIZZA_PEPERONI_HPP
#define FACTORY_METHOD_INCLUDE_PIZZA_PEPERONI_HPP

#include <PizzaInterface.hpp>

class Peperoni: public Pizza {
public:
    Peperoni(PizzaSize size = PizzaSize::Medium, PizzaDough dough = PizzaDough::Regular);

    static const std::string name;
    std::list<std::string> toppings = {
        "Sliced Pepperoni",
        "Sliced Onion",
        "Grated parmesan cheese"
    };
};

#endif //IMPLE_FACTORY_INCLUDE_PIZZA_PEPERONI_HPP
