#ifndef ABSTRACT_FACTORY_INCLUDE_VICTORIAN_FURNITURE_FACTORY_HPP
#define ABSTRACT_FACTORY_INCLUDE_VICTORIAN_FURNITURE_FACTORY_HPP

#include <FurnitureFactory.hpp>

#include <chairs/VictorianChair.hpp>
#include <tables/VictorianTable.hpp>

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* create_chair() const override {
        return new VictorianChair();
    };
    
    Table* create_table() const override {
        return new VictorianTable();
    };
};

#endif // ABSTRACT_FACTORY_INCLUDE_VICTORIAN_FURNITURE_FACTORY_HPP