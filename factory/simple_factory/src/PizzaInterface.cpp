#include <PizzaInterface.hpp>
#include <iostream>

Pizza::Pizza(std::string name) 
    : name_(name){}

void Pizza::prepare() {
    std::cout << "Preparing " << name_ << std::endl;
}

void Pizza::bake(){
    std::cout << "Baking " << name_ << std::endl;
}

void Pizza::cut(){
    std::cout << "Cutting " << name_ << std::endl;
}

void Pizza::box(){
    std::cout << "Boxing " << name_ << std::endl;
}

std::string Pizza::get_name(){
    return name_;
}

void Pizza::set_size(PizzaSize size){
    size_ = size;
}
PizzaSize Pizza::get_size(){
    return size_;
}

void Pizza::set_dough(PizzaDough dough){
    dough_ = dough;
}
PizzaDough Pizza::get_dough(){
    return dough_;
}

void Pizza::set_toppings(std::list<std::string> toppings){
    toppings_ = toppings;
}
void Pizza::add_topping(std::string topping){
    toppings_.push_back(topping);
}
std::list<std::string> Pizza::get_toppings(){
    return toppings_;
}
