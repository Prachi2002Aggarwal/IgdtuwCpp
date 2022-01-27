cmake_minimum_required(VERSION 3.21)
project(OOPSLab)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/Fibonacci" "${PROJECT_SOURCE_DIR}/Fibonacci/FibonacciOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Factorial" "${PROJECT_SOURCE_DIR}/Factorial/FactorialOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/InputOutput" "${PROJECT_SOURCE_DIR}/InputOutput/InputOutputOutput")
