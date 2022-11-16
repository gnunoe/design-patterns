#ifndef STRATEGY_INCLUDE_GUN_BEHAVIOR_HPP
#define STRATEGY_INCLUDE_GUN_BEHAVIOR_HPP

#include <string>
#include <WeaponBehaviorInterface.hpp>

class GunBehavior : public WeaponBehavior {
public:
    void useWeapon() override;
};

#endif // STRATEGY_INCLUDE_GUN_BEHAVIOR_HPP
