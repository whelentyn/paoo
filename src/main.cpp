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

    std::cout << "data1: Temperature " << data1.getTemperature() << "°C, Humidity " << data1.getHumidity() << "%, Pressure " << data1.getPressure() << "hPa, Description: " << data1.getDescription() << std::endl;

    //copy constructor
    WeatherData dataCopyConstructor(data2); //copy constructor to create a copy of data2

    std::cout << "copied data using the copy constructor: Temperature " << dataCopyConstructor.getTemperature() << "°C, Humidity " << dataCopyConstructor.getHumidity() << "%, Pressure " << dataCopyConstructor.getPressure() << "hPa, Description: " << dataCopyConstructor.getDescription() << std::endl;

    //assignment operator
    WeatherData dataAssignmentOperator(0.0, 0.0, 0.0, ""); // empty data object
    dataAssignmentOperator = data2; //ssignment operator to copy data2 into created object

    std::cout << "updated data w/ the assignment operator: Temperature " << dataAssignmentOperator.getTemperature() << "°C, Humidity " << dataAssignmentOperator.getHumidity() << "%, Pressure " << dataAssignmentOperator.getPressure() << "hPa, Description: " << dataAssignmentOperator.getDescription() << std::endl;

    //using the destructor to free dynamic memory
    {
        WeatherData data3(26.0, 60.0, 1012.3, "Clear sky");
        std::cout << "created and used data3: Temperature " << data3.getTemperature() << "°C, Humidity " << data3.getHumidity() << "%, Pressure " << data3.getPressure() << "hPa, Description: " << data3.getDescription() << std::endl;
    } //data3 goes out of scope, destructor is called to free memory - description of data3 is getting freed

    return 0;
}