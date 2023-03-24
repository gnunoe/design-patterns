#ifndef DECORATOR_INCLUDE_MILK_HPP
#define DECORATOR_INCLUDE_MILK_HPP

#include <CondimentDecorator.hpp>
#include <string>

class Milk : public CondimentDecorator {
public:
    Milk(Beverage* beverage);
    double getCost() override;
    std::string getDescription() override;

private:
    static const price_per_size cost_;
    static const std::string description_;
};

#endif // DECORATOR_INCLUDE_MILK_HPP
