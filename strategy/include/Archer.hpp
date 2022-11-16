#ifndef STRATEGY_INCLUDE_ARCHER_HPP
#define STRATEGY_INCLUDE_ARCHER_HPP

#include <Character.hpp>

class Archer : public Character {
public:
    Archer() = default;

void greetings() override;

private:
    std::string greeting = "Elf Legolas";
};

#endif // STRATEGY_INCLUDE_ARCHER_HPP
