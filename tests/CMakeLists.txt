# Add the test executable
add_executable(CallbackDemoTest
    test_callback.cpp
)

# Add the include directories for the tests
target_include_directories(CallbackDemoTest PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

# Link the test executable with the project library
target_link_libraries(CallbackDemoTest PRIVATE
    CallbackDemo
)

# Add the test to CTest
add_test(NAME CallbackDemoTest COMMAND CallbackDemoTest)