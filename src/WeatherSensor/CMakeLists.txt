#define the WeatherSensor library
add_library(WeatherSensor WeatherSensor.cpp)

#link the WeatherData library
target_link_libraries(WeatherSensor WeatherData)