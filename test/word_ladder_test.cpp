// TODO: this file doesn't run at all.
#include "catch2/catch.hpp"
#include <iostream>
TEST_CASE("demo") {
    std::cout << "what" << "\n";
    CHECK(1 == 0);
}