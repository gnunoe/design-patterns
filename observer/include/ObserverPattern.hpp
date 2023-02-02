#ifndef OBSERVER_INCLUDE_OBSERVER_PATTERN_HPP
#define OBSERVER_INCLUDE_OBSERVER_PATTERN_HPP

#include <WeatherDataResult.hpp>

class WeatherObserver{
public:
    virtual void update(const WeatherDataResult& state) = 0;
};

class WeatherSubject{
public:
    virtual void registerObserver(WeatherObserver* o) = 0;
    virtual void removeObserver(WeatherObserver* o) = 0;
    virtual void notifyObservers() = 0;
};

#endif // OBSERVER_INCLUDE_OBSERVER_PATTERN_HPP