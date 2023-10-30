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
        //constructor
        WeatherData(double temp, double hum, double press, const char* desc) :
            temperature(temp), humidity(hum), pressure(press) {
                //allocate memory for data description and copy the string
                description = new char[strlen(desc) + 1];
                strcpy(description, desc);
            }

        //copy constructor
        WeatherData(const WeatherData &other) :
            temperature(other.temperature), humidity(other.humidity), pressure(other.pressure) {
                description = new char[strlen(other.description) + 1];
                strcpy(description, other.description);
            }

        //destructor free dynamic memory
        ~WeatherData() {
            delete[] description;
        }

        double getTemperature() const {
            return temperature;
        }


        double getHumidity() const {
            return humidity;
        }

        double getPressure() const {
            return pressure;
        }

        const char* getDescription() const {
            return description;
        }

};