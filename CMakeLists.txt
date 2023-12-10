cmake_minimum_required(VERSION 3.10)

project(CSharpCallbackDemo NONE) # Set the project language to NONE

# Add a custom target that runs dotnet build
add_custom_target(CSharpBuild ALL
    COMMAND dotnet build
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/callbackdemo
    COMMENT "Building C# project using dotnet CLI"
)