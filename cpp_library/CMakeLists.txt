# FILEPATH: /C:/Users/green/source/repos/callbackDemo/c_library/CMakeLists.txt

# Set the minimum version of CMake required to build the project
cmake_minimum_required(VERSION 3.20)

# Set the name of the project and the language it is written in
project(Cpp_Callback CXX)

# create a shared library
add_library(Cpp_Callback SHARED)

#add the include directory to the library
target_include_directories(Cpp_Callback PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")
target_sources(Cpp_Callback PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/Cpp_Callback.cpp")
