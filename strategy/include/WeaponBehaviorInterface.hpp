#ifndef STRATEGY_INCLUDE_WEAPON_BEHAVIOR_INTERFACE_HPP
#define STRATEGY_INCLUDE_WEAPON_BEHAVIOR_INTERFACE_HPP

#include <string>

class WeaponBehavior {
public:
    virtual void useWeapon() = 0;
};

#endif // STRATEGY_INCLUDE_WEAPON_BEHAVIOR_INTERFACE_HPP
