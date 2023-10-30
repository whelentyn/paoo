#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
#include <utility>
#include <string.h>
#include "../WeatherData/WeatherData.h"
using namespace std;

class WeatherData {
    private:
        double temperature;
        double humidity;
        double pressure;
        char* description;

    public:
        WeatherData(double temp, double hum, double press, const char* desc); //constructor
        WeatherData(const WeatherData& other); //copy constructor
        ~WeatherData(); //destructor

        double getTemperature();
        double getHumidity();
        double getPressure();
        const char* getDescription();
};

#endif