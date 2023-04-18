#ifndef FACTORY_METHOD_INCLUDE_CHICAGO_PIZZA_STORE_HPP
#define FACTORY_METHOD_INCLUDE_CHICAGO_PIZZA_STORE_HPP

#include <PizzaInterface.hpp>
#include <PizzaStore.hpp>

#include <string>
#include <memory>

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> create_pizza(std::string name) override;
};

#endif // FACTORY_METHOD_INCLUDE_CHICAGO_PIZZA_STORE_HPP
