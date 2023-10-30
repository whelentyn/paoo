#include "WeatherData.h"
#include <cstring>


double WeatherData::getTemperature() {
    return temperature;
}


double WeatherData::getHumidity() {
    return humidity;
}

double WeatherData::getPressure() {
    return pressure;
}

const char* WeatherData::getDescription() {
    return description;
}

void WeatherData::setTemperature(double newTemperature) {
    temperature = newTemperature;
}

void WeatherData::setHumidity(double newHumidity) {
    humidity = newHumidity;
}

void WeatherData::setPressure(double newPressure) {
    pressure = newPressure;
}

void WeatherData::setDescription(const char* newDescription) {
    if (description != nullptr) {
        delete[] description; // Free the previous memory (if any)
    }

    description = new char[strlen(newDescription) + 1];
}
