#include <stores/NYPizzaStore.hpp>

#include <pizzas/Peperoni.hpp>
#include <pizzas/Cheese.hpp>

std::unique_ptr<Pizza> NYPizzaStore::create_pizza(std::string name) {
    std::unique_ptr<Pizza> pizza;

    if (name == Peperoni::name) {
        pizza = std::make_unique<Pizza>(Peperoni());
    } else if (name == Cheese::name)
    {
        pizza = std::make_unique<Pizza>(Cheese());
    }

    if (pizza){
        pizza->set_dough(PizzaDough::Thin);
        pizza->add_topping("Salsa Mariana");
        return pizza;
    }

    return nullptr;
}
