#include <fmt/core.h>
#include <range/v3/all.hpp>
#include <string>
#include <iostream>
#include <vector>

auto main() -> int {
  fmt::print("Hello, world!\n");
  std::string s{"hello d"};
  // output: h e l l o
  ranges::for_each(s, [](char c) { std::cout << c << ' '; });
  std::cout << '\n';

  std::vector<int> v{1,2,3};

  for (int x : v) {
    int y = x;
    fmt::print("{}\n", y);
  }

}