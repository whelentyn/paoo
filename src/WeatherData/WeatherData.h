#ifndef WEATHERDATA_H
#define WEATHERDATA_H

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

        double getTemperature() const;
        double getHumidity() const;
        double getPressure() const;
        const char* getDescription() const;


};

#endif