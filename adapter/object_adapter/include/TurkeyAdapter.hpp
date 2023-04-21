#ifndef ADAPTER_INCLUDE_TURKEY_ADAPTER_HPP
#define ADAPTER_INCLUDE_TURKEY_ADAPTER_HPP

#include <DuckInterface.hpp>
#include <TurkeyInterface.hpp>

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(Turkey* turkey)
    : turkey_(turkey) {};

    void quack() override {
        turkey_->gooble();
    };
    void fly() override {
        for (int i=0; i < 5; i++) {
            turkey_->fly();
        }
    };

private:
    Turkey* turkey_;
};

#endif // ADAPTER_INCLUDE_TURKEY_ADAPTER_HPP
