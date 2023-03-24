#ifndef DECORATOR_INCLUDE_TEA_HPP
#define DECORATOR_INCLUDE_TEA_HPP

#include <Beverage.hpp>
#include <string>

class Tea : public Beverage {
public:
    double getCost() override;
    std::string getDescription() override;

private:
    static const price_per_size cost_;
    static const std::string description_;
};

#endif // DECORATOR_INCLUDE_TEA_HPP
