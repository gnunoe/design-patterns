#ifndef ABSTRACT_FACTORY_INCLUDE_FURNITURE_CLIENT_HPP
#define ABSTRACT_FACTORY_INCLUDE_FURNITURE_CLIENT_HPP

#include <FurnitureFactory.hpp>
#include <ChairInterface.hpp>
#include <TableInterface.hpp>

#include <iostream>

class FurnitureClient {
public:
    FurnitureClient(const FurnitureFactory& factory) {
        auto chair = factory.create_chair();
        std::string has_legs = chair->has_legs() ? " with legs" : " without legs";
        
        auto table = factory.create_table();

        std::cout << "Chair created: " << chair->name() << has_legs << std::endl;
        std::cout << "Table created: " << table->name() << " with shape " <<table->shape() << std::endl;

        delete chair;
        delete table;
    }
};

#endif // ABSTRACT_FACTORY_INCLUDE_FURNITURE_CLIENT_HPP