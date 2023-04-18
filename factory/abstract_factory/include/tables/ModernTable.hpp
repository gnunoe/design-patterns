#ifndef ABSTRACT_FACTORY_INCLUDE_MODERN_TABLE_HPP
#define ABSTRACT_FACTORY_INCLUDE_MODERN_TABLE_HPP

#include <TableInterface.hpp>

class ModernTable : public Table {
public:
    bool has_legs() override { return has_legs_; };
    bool sit_on() { return sit_on_; };
    std::string shape() override { return "squared"; };
    std::string name() override {return name_; };
private:

    std::string name_ = "Modern Table";
    bool sit_on_ = false;
    bool has_legs_ = false;
};

#endif // ABSTRACT_FACTORY_INCLUDE_MODERN_TABLE_HPP