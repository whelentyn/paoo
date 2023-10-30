cmake_minimum_required(VERSION 3.0.0)
project(project_paoo_vb VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()   

add_executable(project_paoo_vb main.cpp
               WeatherSensor/WeatherSensor.cpp
               WeatherData/WeatherData.cpp
               WeatherStation/WeatherStation.cpp)

# Include headers and source files from subdirectories
target_link_libraries(project_paoo_vb WeatherData WeatherSensor WeatherStation)
target_include_directories(project_paoo_vb PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/WeatherData" "${PROJECT_BINARY_DIR}/WeatherSensor" "${PROJECT_BINARY_DIR}/WeatherStation")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
