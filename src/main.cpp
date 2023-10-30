#include <iostream>
#include "WeatherSensor/WeatherSensor.h"
#include "WeatherData/WeatherData.h"
#include "WeatherStation/WeatherStation.h"

int main() {
    WeatherSensor sensor1;
    WeatherSensor sensor2;

    WeatherStation station;
    station.addSensor(sensor1);
    station.addSensor(sensor2);

    std::cout << "Weather Station Initialized" << std::endl;

    station.collectData();

    WeatherData data1(30.0, 50.0, 1000.0, "Partly cloudy");
    WeatherData data2(28.5, 55.0, 998.5, "Sunny");

    std::cout << "Updated data1: Temperature " << data1.getTemperature() << "°C, Humidity " << data1.getHumidity() << "%, Pressure " << data1.getPressure() << "hPa, Description: " << data1.getDescription() << std::endl;

    // Example of using the destructor to free dynamic memory
    {
        WeatherData data3(26.0, 60.0, 1012.3, "Clear sky");
        std::cout << "Created and used data3: Temperature " << data3.getTemperature() << "°C, Humidity " << data3.getHumidity() << "%, Pressure " << data3.getPressure() << "hPa, Description: " << data3.getDescription() << std::endl;
    } // data3 goes out of scope, destructor is called to free memory

    return 0;
}