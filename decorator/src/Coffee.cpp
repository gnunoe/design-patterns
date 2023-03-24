#include <Coffee.hpp>

const price_per_size Coffee::cost_ = {
    {Beverage::Size::Small, 1.10},
    {Beverage::Size::Medium, 1.50},
    {Beverage::Size::Large, 1.80}
};

const std::string Coffee::description_ = "Black Coffee";

double Coffee::getCost() {
    return Coffee::cost_.at(size);
}

std::string Coffee::getDescription() {
    return Coffee::description_;
} 