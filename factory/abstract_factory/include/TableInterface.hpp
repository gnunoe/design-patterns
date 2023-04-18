#ifndef ABSTRACT_FACTORY_INCLUDE_TABLE_INTERFACE_HPP
#define ABSTRACT_FACTORY_INCLUDE_TABLE_INTERFACE_HPP

#include <string>

class Table {
public:
    virtual bool has_legs() = 0;
    bool sit_on() { return sit_on_; }
    virtual std::string shape() = 0;
    virtual std::string name() {return name_; };

private:

    std::string name_;
    bool sit_on_ = false;
};

#endif // ABSTRACT_FACTORY_INCLUDE_TABLE_INTERFACE_HPP