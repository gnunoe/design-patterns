#ifndef DECORATOR_INCLUDE_COFFEE_HPP
#define DECORATOR_INCLUDE_COFFEE_HPP

#include <Beverage.hpp>
#include <string>

class Coffee : public Beverage {
public:
    double getCost() override;
    std::string getDescription() override;

private:
    static const price_per_size cost_;
    static const std::string description_;
};

#endif // DECORATOR_INCLUDE_COFFEE_HPP
