#ifndef ABSTRACT_FACTORY_INCLUDE_VICTORIAN_CHAIR_HPP
#define ABSTRACT_FACTORY_INCLUDE_VICTORIAN_CHAIR_HPP

#include <ChairInterface.hpp>

class VictorianChair : public Chair {
public:
    bool has_legs() override { return has_legs_; };
    bool sit_on() { return sit_on_; }
    std::string name() override {return name_; };

private:

    std::string name_ = "Victorian Chair";
    bool sit_on_ = true;
    bool has_legs_ = true;
};

#endif // ABSTRACT_FACTORY_INCLUDE_VICTORIAN_CHAIR_HPP