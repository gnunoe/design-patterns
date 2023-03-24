#include <CondimentDecorator.hpp>

CondimentDecorator::CondimentDecorator(Beverage* beverage)
: beverage_(beverage) {}


double CondimentDecorator::getCost() {
    return beverage_->getCost();
}

std::string CondimentDecorator::getDescription() {
    return beverage_->getDescription();
}

Beverage::Size CondimentDecorator::getSize() {
    return beverage_->size;
}
