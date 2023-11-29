cmake_minimum_required(VERSION 3.15)

project(CSharpCallbackDemo VERSION 1.0.0 LANGUAGES CSharp)

#define the executable
add_executable(CSharpCallbackDemo
    Program.cs
)

#set the properties for the project
set_property(TARGET CSharpCallbackDemo 
    PROPERTY VS_DOTNET_REFERENCES "System"
)

#set the .NET Framework version for the project
set(CMAKE_CSharp_FLAGS "/langversion:latest")