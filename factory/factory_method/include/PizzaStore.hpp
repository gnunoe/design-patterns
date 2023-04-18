#ifndef FACTORY_METHOD_INCLUDE_PIZZA_STORE_HPP
#define FACTORY_METHOD_INCLUDE_PIZZA_STORE_HPP

#include <PizzaInterface.hpp>

#include <string>
#include <memory>

class PizzaStore {
public:
    std::unique_ptr<Pizza> order_pizza(std::string name);
    virtual std::unique_ptr<Pizza> create_pizza(std::string name) = 0;
};

#endif // FACTORY_METHOD_INCLUDE_PIZZA_STORE_HPP
