#ifndef SIMPLE_FACTORY_INCLUDE_PIZZA_INTERFACE_HPP
#define SIMPLE_FACTORY_INCLUDE_PIZZA_INTERFACE_HPP

#include <string>
#include <list>

enum PizzaSize {
    Small,
    Medium,
    Large
};

enum PizzaDough {
    Regular,
    Thin
};

class Pizza {
public:

    Pizza(std::string name);

    void prepare();
    void bake();
    void cut();
    void box();

    std::string get_name();

    void set_size(PizzaSize size);
    PizzaSize get_size();

    void set_dough(PizzaDough dough);
    PizzaDough get_dough();

    void set_toppings(std::list<std::string> toppings);
    void add_topping(std::string topping);
    std::list<std::string> get_toppings();

private:

    std::string name_;
    PizzaSize size_ = PizzaSize::Small;
    PizzaDough dough_ = PizzaDough::Regular;
    std::list<std::string> toppings_;
};

#endif // SIMPLE_FACTORY_INCLUDE_PIZZA_INTERFACE_HPP