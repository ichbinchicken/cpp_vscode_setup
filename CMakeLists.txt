# CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(HelloWorld DESCRIPTION "A hello world project" VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)

# this doesn't have any effect at all.
# enable_testing()
# include(CTest)

# find 3rd party dependencies
find_package(fmt CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

include_directories(include)
add_subdirectory(src)
add_subdirectory(test)