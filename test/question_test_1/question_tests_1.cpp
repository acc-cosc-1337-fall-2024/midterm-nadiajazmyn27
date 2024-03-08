#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Fibonacci function returns correct values", "[fibonacci]") {
	REQUIRE(get_fib_number(0) == 0);
    REQUIRE(get_fib_number(1) == 1);
    REQUIRE(get_fib_number(5) == 5);
    REQUIRE(get_fib_number(7) == 13);
    REQUIRE(get_fib_number(10) == 55);
    REQUIRE(get_fib_number(12) == 144);
}