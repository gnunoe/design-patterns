#ifndef OBSERVER_INCLUDE_WEATHER_STATS_DISPLAY_HPP
#define OBSERVER_INCLUDE_WEATHER_STATS_DISPLAY_HPP

#include<ObserverPattern.hpp>
#include<WeatherDataResult.hpp>
#include<DisplayElementInterface.hpp>

class WeatherStatsDisplay
    : public WeatherObserver
    , public DisplayElement
{
public:
    WeatherStatsDisplay(WeatherSubject &subject);
    void display() override;

private:
    void update(const WeatherDataResult& state) override;
    WeatherSubject &subject_;

    int avg_temp_;
    int min_temp_;
    int max_temp_;
    int num_readings_;
};

#endif // OBSERVER_INCLUDE_WEATHER_STATS_DISPLAY_HPP