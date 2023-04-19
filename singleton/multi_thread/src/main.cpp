#include <Singleton.hpp>

#include <iostream>

int main(int argc, char** argv) {

    if (argc != 1) {
        std::cout << "ERROR: no parameters needed!" << std::endl;
        return 1;
    }

    auto singleton1 = Singleton::getInstance("1");
    std::cout << singleton1->name() << std::endl;

    auto singleton2 = Singleton::getInstance("2");
    std::cout << singleton2->name() << std::endl;
};
