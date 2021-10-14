add_executable(test_main test_main.cpp)
target_link_libraries(test_main PUBLIC Catch2::Catch2)
target_link_libraries(test_main PUBLIC wl Catch2::Catch2)