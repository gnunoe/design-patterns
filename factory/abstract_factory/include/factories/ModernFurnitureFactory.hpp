#ifndef ABSTRACT_FACTORY_INCLUDE_MODERN_FURNITURE_FACTORY_HPP
#define ABSTRACT_FACTORY_INCLUDE_MODERN_FURNITURE_FACTORY_HPP

#include <FurnitureFactory.hpp>

#include <chairs/ModernChair.hpp>
#include <tables/ModernTable.hpp>

class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* create_chair() const override {
        return new ModernChair();
    };
    
    Table* create_table() const override {
        return new ModernTable();
    };
};

#endif // ABSTRACT_FACTORY_INCLUDE_MODERN_FURNITURE_FACTORY_HPP