#ifndef STRATEGY_INCLUDE_CHARACTER_HPP
#define STRATEGY_INCLUDE_CHARACTER_HPP

#include <string>
#include <WeaponBehaviorInterface.hpp>

class Character {
public:
    Character() = default;

    virtual void greetings() = 0;

    inline void setWeapon(WeaponBehavior* w) {
        weapon = w;
    }

    WeaponBehavior* getWeapon() {
        return weapon;
    }

    void useWeapon(){
        weapon->useWeapon();
    }

private:
    std::string greeting;
    WeaponBehavior* weapon;
};

#endif // STRATEGY_INCLUDE_CHARACTER_HPP
