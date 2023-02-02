#include <WeatherData.hpp>

#include <algorithm>
#include <iostream>

void WeatherData::registerObserver(WeatherObserver* o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(WeatherObserver* o) {
    observers.remove(o);
}

void WeatherData::notifyObservers() {
    std::list<WeatherObserver *>::iterator it = observers.begin();
    while (it != observers.end()) {
      (*it)->update(state);
      ++it;
    }
}

int WeatherData::getTemperature(){
    return state.Temperature;
}
int WeatherData::getHumidity(){
    return state.Humidity;
}
int WeatherData::getPressure(){
    return state.Pressure;
}
void WeatherData::measurementsChanged(){
    notifyObservers();
}

void WeatherData::setMeasurements(int T, int H, int P){
    state.Temperature = T;
    state.Humidity = H;
    state.Pressure = P;
    measurementsChanged();
}
