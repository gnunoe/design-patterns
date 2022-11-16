#ifndef STRATEGY_INCLUDE_SWORD_BEHAVIOR_HPP
#define STRATEGY_INCLUDE_SWORD_BEHAVIOR_HPP

#include <string>
#include <WeaponBehaviorInterface.hpp>

class SwordBehavior : public WeaponBehavior {
public:
    void useWeapon() override;
};

#endif // STRATEGY_INCLUDE_SWORD_BEHAVIOR_HPP
