#ifndef SIMPLE_FACTORY_INCLUDE_PIZZA_STORE_HPP
#define SIMPLE_FACTORY_INCLUDE_PIZZA_STORE_HPP

#include <SimplePizzaFactory.hpp>
#include <PizzaInterface.hpp>

#include <string>
#include <memory>

class PizzaStore {
public:
    PizzaStore(SimplePizzaFactory factory);
    std::unique_ptr<Pizza> order_pizza(std::string name);
private:
    SimplePizzaFactory factory_;
};

#endif // SIMPLE_FACTORY_INCLUDE_PIZZA_STORE_HPP
