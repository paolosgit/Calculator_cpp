cmake_minimum_required(VERSION 3.23)
project(Calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calculator main.cpp Base.cpp Base.h Button.cpp Button.h Screen.cpp Screen.h Calculator.cpp Calculator.h Font.cpp Font.h Helper.cpp Helper.h Application.cpp Application.h RPN.cpp RPN.h Computation.cpp Computation.h ShuntingYard.cpp ShuntingYard.h Keyboard.cpp Keyboard.h MouseEvents.cpp MouseEvents.h)

target_link_libraries(Calculator sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
