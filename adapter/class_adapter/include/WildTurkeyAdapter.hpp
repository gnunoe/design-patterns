#ifndef ADAPTER_INCLUDE_WILD_TURKEY_ADAPTER_HPP
#define ADAPTER_INCLUDE_WILD_TURKEY_ADAPTER_HPP

#include <DuckInterface.hpp>
#include <turkeys/WildTurkey.hpp>

class WildTurkeyAdapter : public Duck, public WildTurkey {
public:
    WildTurkeyAdapter() {};

    void quack() override {
        gooble();
    };
    void fly() override {
        for (int i=0; i < 5; i++) {
            WildTurkey::fly();
        }
    };
};

#endif // ADAPTER_INCLUDE_WILD_TURKEY_ADAPTER_HPP
