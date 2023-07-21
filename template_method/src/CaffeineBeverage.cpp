#include <CaffeineBeverage.hpp>
#include <iostream>

void CaffeineBeverage::prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}

void CaffeineBeverage::boilWater() {
    std::cout << "Boiling Water" << std::endl;
}

void CaffeineBeverage::pourInCup() {
    std::cout << "Pouring in Cup" << std::endl;
}
