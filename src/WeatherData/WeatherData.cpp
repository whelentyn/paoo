#include <iostream>
#include <vector>
#include <cstring>

class WeatherData {
    private:
        double temperature;
        double humidity;
        double pressure;
        char* description;

    public:
        WeatherData(double temp, double hum, double press, const char* desc) :
            temperature(temp), humidity(hum), pressure(press) {
                description = new char[strlen(desc) + 1];
                strcpy(description, desc);
            }

        WeatherData(const WeatherData &other) :
            temperature(other.temperature), humidity(other.humidity), pressure(other.pressure) {
                
            }

};