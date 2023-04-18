#include <SimplePizzaFactory.hpp>

#include <pizzas/Peperoni.hpp>
#include <pizzas/Cheese.hpp>

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string name) {
    if (name == Peperoni::name) {
        return std::make_unique<Pizza>(Peperoni());
    } else if (name == Cheese::name)
    {
        return std::make_unique<Pizza>(Cheese());
    }
    return nullptr;
}
