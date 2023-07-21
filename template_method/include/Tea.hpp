#ifndef TEMPLATE_METHOD_INCLUDE_TEA_HPP
#define TEMPLATE_METHOD_INCLUDE_TEA_HPP

#include <CaffeineBeverage.hpp>

class Tea : public CaffeineBeverage {
public:
    Tea() = default;

    void brew() override final;
    void addCondiments() override final;
};

#endif // TEMPLATE_METHOD_INCLUDE_TEA_HPP
