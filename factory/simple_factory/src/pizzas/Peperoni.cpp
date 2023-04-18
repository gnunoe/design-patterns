#include <pizzas/Peperoni.hpp>

const std::string Peperoni::name = "Peperoni";

Peperoni::Peperoni(PizzaSize size, PizzaDough dough) 
    : Pizza(Peperoni::name)
{
    set_size(size);
    set_dough(dough);
    set_toppings(Peperoni::toppings);
}
