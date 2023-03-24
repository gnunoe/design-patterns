#include <Tea.hpp>

const price_per_size Tea::cost_ = {
    {Beverage::Size::Small, 1.05},
    {Beverage::Size::Medium, 1.20},
    {Beverage::Size::Large, 1.30}
};
const std::string Tea::description_ = "Tea";

double Tea::getCost() {
    return Tea::cost_.at(size);
}

std::string Tea::getDescription() {
    return Tea::description_;
}
