#include "/home/whelentyn/Desktop/lab_paoo/project_paoo_vb/src/WeatherData/WeatherData.h"
#include "/home/whelentyn/Desktop/lab_paoo/project_paoo_vb/src/WeatherData/WeatherData.cpp"

class WeatherSensor {
    public:
        WeatherSensor readData() {
            //simulate some data that is read
            double temp = 25.5;
            double hum = 60.0;
            double press = 1013.2;
            return WeatherData(temp, hum, press, "Sunny day");
        }
};