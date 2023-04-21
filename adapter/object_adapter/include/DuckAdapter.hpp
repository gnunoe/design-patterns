#ifndef ADAPTER_INCLUDE_DUCK_ADAPTER_HPP
#define ADAPTER_INCLUDE_DUCK_ADAPTER_HPP

#include <DuckInterface.hpp>
#include <TurkeyInterface.hpp>

class DuckAdapter : public Turkey {
public:
    DuckAdapter(Duck* duck)
    : duck_(duck) {};

    void gooble() override {
        duck_->quack();
    };
    void fly() override {
        duck_->fly();
    };

private:
    Duck* duck_;
};

#endif // ADAPTER_INCLUDE_DUCK_ADAPTER_HPP
