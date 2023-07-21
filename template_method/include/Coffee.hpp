#ifndef TEMPLATE_METHOD_INCLUDE_COFFEE_HPP
#define TEMPLATE_METHOD_INCLUDE_COFFEE_HPP

#include <CaffeineBeverage.hpp>

class Coffee : public CaffeineBeverage {
public:
    Coffee() = default;

    void brew() override final;
    void addCondiments() override final;
};

#endif // TEMPLATE_METHOD_INCLUDE_COFFEE_HPP
