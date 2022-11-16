#include "fib.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Fib are computed", "[factorial]") {
    REQUIRE(Fib(1) == 1);
    REQUIRE(Fib(2) == 2);
    REQUIRE(Fib(3) == 6);
    REQUIRE(Fib(10) == 3628800);
}
