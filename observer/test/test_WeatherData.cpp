#include <WeatherData.hpp>
#include <display/CurrentConditionDisplay.hpp>
#include <display/WeatherStatsDisplay.hpp>

#include <gtest/gtest.h>

TEST(WeatherData, FirstTest){
    WeatherData *wd = new WeatherData();
    auto d1 = new CurrentConditionDisplay(*wd);

    wd->setMeasurements(1,2,3);
    wd->setMeasurements(4,4,4);

    auto d2 = new WeatherStatsDisplay(*wd);

    wd->setMeasurements(10,0,0);
    wd->setMeasurements(20,0,0);
    wd->setMeasurements(25,0,0);

    wd->removeObserver(d1);
    wd->removeObserver(d2);
};
