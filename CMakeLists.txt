# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Keyno VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Common Homebrew paths for Apple Silicon and Intel Macs
set(OPENSSL_PATHS
    /opt/homebrew/opt/openssl@3  # Apple Silicon
    /usr/local/opt/openssl@3     # Intel Mac
    /usr/local/opt/openssl       # Older Homebrew installations
    /opt/homebrew/opt/openssl    # Alternative path
)

# Try to find OpenSSL in standard locations first
find_package(OpenSSL)

# If not found, try Homebrew paths
if(NOT OpenSSL_FOUND)
    foreach(path IN LISTS OPENSSL_PATHS)
        if(EXISTS "${path}")
            message(STATUS "Looking for OpenSSL in: ${path}")
            set(OPENSSL_ROOT_DIR "${path}")
            find_package(OpenSSL)
            if(OpenSSL_FOUND)
                break()
            endif()
        endif()
    endforeach()
endif()

# If still not found, error out with helpful message
if(NOT OpenSSL_FOUND)
    message(FATAL_ERROR 
        "OpenSSL not found. Please install OpenSSL:\n"
        "  macOS:   brew install openssl@3\n"
        "  Linux:   sudo apt-get install libssl-dev\n"
        "           or: sudo yum install openssl-devel\n"
        "  Windows: vcpkg install openssl:x64-windows\n"
        "Or set OPENSSL_ROOT_DIR to your OpenSSL installation path."
    )
endif()

# Print OpenSSL details for debugging
message(STATUS "Found OpenSSL ${OPENSSL_VERSION}")
message(STATUS "OpenSSL include dir: ${OPENSSL_INCLUDE_DIR}")
message(STATUS "OpenSSL libraries: ${OPENSSL_LIBRARIES}")

# Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${OPENSSL_INCLUDE_DIR}
)

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
add_executable(${PROJECT_NAME} ${SOURCES})

# Link OpenSSL
target_link_libraries(${PROJECT_NAME} 
    PRIVATE 
        OpenSSL::SSL 
        OpenSSL::Crypto
)

# Set include directories
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${OPENSSL_INCLUDE_DIR}
)