#ifndef SIMPLE_FACTORY_INCLUDE_SIMPLE_PIZZA_FACTORY_HPP
#define SIMPLE_FACTORY_INCLUDE_SIMPLE_PIZZA_FACTORY_HPP

#include <PizzaInterface.hpp>

#include <string>
#include <memory>

class SimplePizzaFactory {
public:
    std::unique_ptr<Pizza> createPizza(std::string name);
};

#endif // SIMPLE_FACTORY_INCLUDE_SIMPLE_PIZZA_FACTORY_HPP