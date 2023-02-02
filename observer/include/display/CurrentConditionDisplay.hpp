#ifndef OBSERVER_INCLUDE_CURRENT_CONDITION_DISPLAY_HPP
#define OBSERVER_INCLUDE_CURRENT_CONDITION_DISPLAY_HPP

#include<ObserverPattern.hpp>
#include<WeatherDataResult.hpp>
#include<DisplayElementInterface.hpp>

class CurrentConditionDisplay
    : public WeatherObserver
    , public DisplayElement
{
public:
    CurrentConditionDisplay(WeatherSubject &subject);
    void display() override;

private:
    void update(const WeatherDataResult& state) override;
    WeatherDataResult state_;
    WeatherSubject &subject_;
};

#endif // OBSERVER_INCLUDE_CURRENT_CONDITION_DISPLAY_HPP