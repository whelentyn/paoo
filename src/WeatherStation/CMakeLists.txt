#define the WeatherStation library
add_library(WeatherStation WeatherStation.cpp)

#link the WeatherSensor and WeatherData libraries
target_link_libraries(WeatherStation WeatherSensor WeatherData)