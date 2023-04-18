#ifndef ABSTRACT_FACTORY_INCLUDE_CHAIR_INTERFACE_HPP
#define ABSTRACT_FACTORY_INCLUDE_CHAIR_INTERFACE_HPP

#include <string>

class Chair {
public:
    virtual bool has_legs() = 0;
    bool sit_on() { return sit_on_; }
    virtual std::string name() {return name_; };
private:

    std::string name_;
    bool sit_on_ = true;
};

#endif // ABSTRACT_FACTORY_INCLUDE_CHAIR_INTERFACE_HPP