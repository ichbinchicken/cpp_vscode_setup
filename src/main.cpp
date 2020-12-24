#include <fmt/core.h>
#include <range/v3/all.hpp>
#include <string>
#include <iostream>


auto main() -> int {
  fmt::print("Hello, world!\n");
  std::string s{"hello world"};
    // output: h e l l o
    ranges::for_each(s, [](char c) { std::cout << c << ' '; });
    std::cout << '\n';
}