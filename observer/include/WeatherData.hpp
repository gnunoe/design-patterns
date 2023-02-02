#ifndef OBSERVER_INCLUDE_WEATHER_DATA_HPP
#define OBSERVER_INCLUDE_WEATHER_DATA_HPP

#include<ObserverPattern.hpp>
#include<WeatherDataResult.hpp>
#include<list>

class WeatherData : public WeatherSubject{
public:
    // Subject Methods
    void registerObserver(WeatherObserver* o) override;
    void removeObserver(WeatherObserver* o) override;
    void notifyObservers() override;

    // Class Methods
    int getTemperature();
    int getHumidity();
    int getPressure();
    // For the Weather Station
    void setMeasurements(int T, int H, int P);

private:
    void measurementsChanged();

    std::list<WeatherObserver*> observers;
    WeatherDataResult state;
};

#endif // OBSERVER_INCLUDE_WEATHER_DATA_HPP
