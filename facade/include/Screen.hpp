#ifndef FACADE_INCLUDE_SCREEN_HPP
#define FACADE_INCLUDE_SCREEN_HPP

#include <iostream>

class Screen {
public:
    void up() {
        std::cout << "Bring screen up" << std::endl;
    };
    void down() {
        std::cout << "Bring screen down" << std::endl;
    };
};

#endif // FACADE_INCLUDE_SCREEN_HPP
