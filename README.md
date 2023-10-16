# Purpose
This is a demo project showing the following using cmake:
- [X] Generate a library from c files
- [X] Generate a library from cpp files
- [ ] Running tests using cmake
- [ ] Using a non-static C# method as a callback in a C function
- [ ] Using a non-static C# method as a callback in a C++ method

# Structure
At the top, there is a `CMakeLists.txt` that uses the `CMakeLists.txt` in each subdirectory to build everything in the project.
## C Library
The sources for the c library are in the `c_library` directory.
## C++ Library
The sources for the c++ library are in the `cpp_library` directory.

## Tests
The tests are in the `tests` directory.
