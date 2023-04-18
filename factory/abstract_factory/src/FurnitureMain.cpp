#include <FurnitureClient.hpp>

#include <factories/VictorianFurnitureFactory.hpp>
#include <factories/ModernFurnitureFactory.hpp>

#include <ChairInterface.hpp>
#include <TableInterface.hpp>

#include <iostream>

int main(int argc, char** argv) {

    if (argc != 2) {
        std::cout << "ERROR: Furniture family (string) not provided" << std::endl;
        return 1;
    }

    std::string furniture_family = argv[1];
    FurnitureFactory* factory;

    if (furniture_family == "victorian") {
        factory = new VictorianFurnitureFactory();
    } else if (furniture_family == "modern") {
        factory = new ModernFurnitureFactory();
    } else {
        throw std::invalid_argument("Invalid furniture family.");
    }

    auto client = FurnitureClient(*factory);
};
