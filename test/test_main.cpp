#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include <iostream>
#include "word_ladder.hpp"

TEST_CASE("demo") {
    std::cout << "what" << "\n";
    CHECK(1 == 1);
    int i = word_ladder::plus(1, 2);
    CHECK(i == 4);
}