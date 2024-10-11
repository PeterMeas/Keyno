# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Keyno)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/auth.cpp
    src/password_entry.cpp
    src/password_manager.cpp
    src/user.cpp
    src/utility.cpp
    main.cpp
)

# Create executable
add_executable(Keyno ${SOURCES})
