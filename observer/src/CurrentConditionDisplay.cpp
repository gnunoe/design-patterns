#include <display/CurrentConditionDisplay.hpp>
#include <iostream>

CurrentConditionDisplay::CurrentConditionDisplay(WeatherSubject &subject)
    : subject_(subject)
{
    this->subject_.registerObserver(this);
}

void CurrentConditionDisplay::display(){
    std::cout << "Current Conditions\n"
        << "Temperature: " << state_.Temperature << " "
        << "Humidity: " << state_.Humidity << " "
        << "Pressure: " << state_.Pressure
        << std::endl;
}

void CurrentConditionDisplay::update(const WeatherDataResult& state) {
    state_ = state;
    display();
}
