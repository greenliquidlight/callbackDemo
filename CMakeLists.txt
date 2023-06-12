# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.15)

# Set the c++ standard to use
set(CMAKE_CXX_STANDARD 20)

project(CallbackDemo VERSION 1.0.0)
cmake_policy(SET CMP0048 NEW)
set(CallbackDemo_VERSION 1.0)

# Use all of the source files in the src directory
file (GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# Create the executable
add_executable(CallbackDemo ${SRC_FILES})

# Add the include directory to the include path
target_include_directories(CallbackDemo PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

# Add CTest to demo
# # add tests usign CTest
# enable_testing()

# # Add the test directory
# add_subdirectory(tests)