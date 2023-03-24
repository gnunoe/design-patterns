#ifndef DECORATOR_INCLUDE_CONDIMENT_DECORATOR_HPP
#define DECORATOR_INCLUDE_CONDIMENT_DECORATOR_HPP

#include <Beverage.hpp>
#include <string>

class CondimentDecorator : public Beverage {
public:
    CondimentDecorator(Beverage* beverage);
    double getCost() override;
    std::string getDescription() override;
    Beverage::Size getSize();

private:
    Beverage* beverage_;
};

#endif // DECORATOR_INCLUDE_CONDIMENT_DECORATOR_HPP
