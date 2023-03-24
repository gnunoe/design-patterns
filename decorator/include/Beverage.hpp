#ifndef DECORATOR_INCLUDE_BEVERAGE_HPP
#define DECORATOR_INCLUDE_BEVERAGE_HPP

#include <string>
#include <map>


class Beverage {
public:
    enum class Size {
        Small,
        Medium,
        Large
    };

    Size size = Size::Small;
    inline Size getSize() {
        return size;
    };
    inline void setSize(const Size& new_size) {
        size = new_size;
    };

    virtual double getCost() = 0;
    virtual std::string getDescription() = 0;
};

using price_per_size = std::map<Beverage::Size, double>;

#endif // DECORATOR_INCLUDE_BEVERAGE_HPP
