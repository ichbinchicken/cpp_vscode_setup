#include <fmt/core.h>
#include <range/v3/all.hpp>
#include <string>
#include <iostream>
#include <absl/container/flat_hash_set.h>


auto main() -> int {
  fmt::print("Hello, world!\n");
  std::string s{"hello d"};
    // output: h e l l o
    ranges::for_each(s, [](char c) { std::cout << c << ' '; });
    std::cout << '\n';

}