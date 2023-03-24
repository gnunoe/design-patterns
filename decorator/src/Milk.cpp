#include <Milk.hpp>

const price_per_size Milk::cost_ = {
    {Beverage::Size::Small, 0.20},
    {Beverage::Size::Medium, 0.30},
    {Beverage::Size::Large, 0.40}
};
const std::string Milk::description_ = "Milk";

Milk::Milk(Beverage* beverage)
: CondimentDecorator(beverage) {}

double Milk::getCost() {    
    return Milk::cost_.at(CondimentDecorator::getSize()) + CondimentDecorator::getCost();
}

std::string Milk::getDescription() {
    return CondimentDecorator::getDescription() + ", " + Milk::description_;
}
