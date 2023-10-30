#ifndef WEATHERSENSOR_H
#define WEATHERSENSOR_H

#include "../WeatherData/WeatherData.h"

class WeatherSensor {
    public:
        WeatherData readData() const;
};

#endif