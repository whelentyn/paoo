#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include "../WeatherSensor/WeatherSensor.h"
#include <vector>

class WeatherStation {
private:
    std::vector<WeatherSensor> sensors;

public:
    void addSensor(const WeatherSensor& sensor);
    void collectData();
};

#endif
