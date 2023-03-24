#ifndef DECORATOR_INCLUDE_MOCHA_HPP
#define DECORATOR_INCLUDE_MOCHA_HPP

#include <CondimentDecorator.hpp>
#include <string>

class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage* beverage);
    double getCost() override;
    std::string getDescription() override;
    
private:
    static const price_per_size cost_;
    static const std::string description_;
};

#endif // DECORATOR_INCLUDE_MOCHA_HPP
