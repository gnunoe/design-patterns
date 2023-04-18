#include <PizzaStore.hpp>

std::unique_ptr<Pizza> PizzaStore::order_pizza(std::string name) {
    auto pizza = this->create_pizza(name);

    if (pizza != nullptr) {
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    return pizza;
}
