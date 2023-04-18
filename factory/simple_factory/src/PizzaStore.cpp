#include <PizzaStore.hpp>

PizzaStore::PizzaStore(SimplePizzaFactory factory)
    : factory_(factory) { }

std::unique_ptr<Pizza> PizzaStore::order_pizza(std::string name){
    auto pizza = factory_.createPizza(name);

    if (pizza != nullptr) {
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    return pizza;
}
