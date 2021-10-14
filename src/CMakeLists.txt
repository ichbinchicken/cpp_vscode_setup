add_executable(main main.cpp)
target_link_libraries(main PUBLIC fmt::fmt)
target_link_libraries(main PUBLIC range-v3)

add_library(wl word_ladder.cpp)