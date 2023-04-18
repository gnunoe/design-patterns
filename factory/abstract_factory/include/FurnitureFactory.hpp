#ifndef ABSTRACT_FACTORY_INCLUDE_FURNITURE_FACTORY_HPP
#define ABSTRACT_FACTORY_INCLUDE_FURNITURE_FACTORY_HPP

#include <ChairInterface.hpp>
#include <TableInterface.hpp>

class FurnitureFactory {
public:
    virtual Chair* create_chair() const = 0;
    virtual Table* create_table() const = 0;
};

#endif // ABSTRACT_FACTORY_INCLUDE_FURNITURE_FACTORY_HPP