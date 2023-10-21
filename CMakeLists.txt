cmake_minimum_required(VERSION 3.20)
project(CallbackDemo C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src/c_library)
add_subdirectory(src/cpp_library)

include(CTest)
add_subdirectory(tests)
