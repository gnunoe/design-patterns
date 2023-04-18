#include <pizzas/Cheese.hpp>

const std::string Cheese::name = "Cheese";

Cheese::Cheese(PizzaSize size, PizzaDough dough) 
    : Pizza(Cheese::name)
{
    set_size(size);
    set_dough(dough);
    set_toppings(Cheese::toppings);
}
