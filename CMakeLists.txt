# CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(HelloWorld DESCRIPTION "A hello world project" VERSION 0.0.1)

# ———————————————————————————
# find 3rd party dependencies
# ———————————————————————————

find_package(fmt CONFIG REQUIRED)

# —————————————————————————————
# create target for main binary
# —————————————————————————————
add_executable(main src/main.cpp)
target_compile_features(main PUBLIC cxx_std_17)
target_link_libraries(main PRIVATE fmt::fmt)