#ifndef STRATEGY_INCLUDE_KING_HPP
#define STRATEGY_INCLUDE_KING_HPP

#include <Character.hpp>

class King : public Character {
public:
    King() = default;

void greetings() override;

private:
    std::string greeting = "Your Majesty";
};

#endif // STRATEGY_INCLUDE_KING_HPP
