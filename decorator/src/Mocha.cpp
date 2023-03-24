#include <Mocha.hpp>

const price_per_size Mocha::cost_ = {
    {Beverage::Size::Small, 0.40},
    {Beverage::Size::Medium, 0.50},
    {Beverage::Size::Large, 0.60}
};
const std::string Mocha::description_ = "Mocha";

Mocha::Mocha(Beverage* beverage)
: CondimentDecorator(beverage) {}

double Mocha::getCost() {    
    return Mocha::cost_.at(CondimentDecorator::getSize()) + CondimentDecorator::getCost();
}

std::string Mocha::getDescription() {
    return CondimentDecorator::getDescription() + ", " + Mocha::description_;
}
