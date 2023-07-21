#ifndef TEMPLATE_METHOD_INCLUDE_CAFFEINE_BEVERAGE_HPP
#define TEMPLATE_METHOD_INCLUDE_CAFFEINE_BEVERAGE_HPP

class CaffeineBeverage {
public:
    CaffeineBeverage() = default;

    void prepareRecipe();
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
private:
    void boilWater();
    void pourInCup();
};

#endif // TEMPLATE_METHOD_INCLUDE_CAFFEINE_BEVERAGE_HPP
