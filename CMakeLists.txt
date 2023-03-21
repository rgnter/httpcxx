cmake_minimum_required(VERSION 3.24)
project(httpcxx
        DESCRIPTION "Libary for writing HTTP practical servers and clients in C++")

find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)

# Configure project target
add_library(httpcxx_project INTERFACE)
target_compile_features(httpcxx_project
        INTERFACE cxx_std_17)
if (MSVC)
    # MSVC compiler flags
    target_compile_options(httpcxx_project
            INTERFACE /W4)
else()
    # GCC compiler flags
    target_compile_options(httpcxx_project
            INTERFACE -Wall -Wextra -Wpedantic)
endif()

# Configure server library target
add_library(httpcxx
        include/httpcxx/httpcxx.hpp
        include/httpcxx/server.hpp
        include/httpcxx/client.hpp
        include/httpcxx/uri.hpp
        src/httpcxx/server.cpp)
target_link_libraries(httpcxx
        PRIVATE OpenSSL::SSL)
target_include_directories(httpcxx
        PUBLIC include/)

# Configure client libary target
#add_library(httpcxx
#        include/httpcxx/server.hpp
#        src/httpcxx/server.cpp)

# Configure test target
add_executable(httpcxx_test
        src/httpcxx_test/main.cpp)
