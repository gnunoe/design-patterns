#include <display/WeatherStatsDisplay.hpp>
#include <iostream>

WeatherStatsDisplay::WeatherStatsDisplay(WeatherSubject &subject)
    : subject_(subject)
    , avg_temp_(0)
    , max_temp_(0)
    , min_temp_(0)
    , num_readings_(0)
{
    this->subject_.registerObserver(this);
}

void WeatherStatsDisplay::display(){
    std::cout << "Weather Stats\n"
        << "Avg. T: " << avg_temp_ << " "
        << "Min. T: " << min_temp_ << " "
        << "Max. T: " << max_temp_
        << std::endl;
}

void WeatherStatsDisplay::update(const WeatherDataResult& state) {

    num_readings_++;
    auto& temp = state.Temperature;
    if (temp > max_temp_) {
        max_temp_ = temp;
    } else if (temp < min_temp_) {
        min_temp_ = temp;
    }

    avg_temp_ = (avg_temp_ + temp)/num_readings_;

    display();
}
