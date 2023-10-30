#include "WeatherSensor.h"

WeatherData WeatherSensor::readData() {
    //simulate some data that is ready
    double temp = 25.5;
    double hum = 60.0;
    double press = 1013.2;
    return WeatherData(temp, hum, press, "Sunny day");
}