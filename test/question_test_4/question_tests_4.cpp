#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Ingredients calculation for specific cookie amounts", "[get_cookie_ingredients]") {
    SECTION("48 cookies - original recipe") {
        auto ingredients = get_cookie_ingredients(48);
        REQUIRE(ingredients[0] == Approx(1.5));
        REQUIRE(ingredients[1] == Approx(1.0));
        REQUIRE(ingredients[2] == Approx(2.75));
    }

    SECTION("96 cookies - double the recipe") {
        auto ingredients = get_cookie_ingredients(96);
        REQUIRE(ingredients[0] == Approx(3.0));
        REQUIRE(ingredients[1] == Approx(2.0));
        REQUIRE(ingredients[2] == Approx(5.5));
    }

    SECTION("24 cookies - half the recipe") {
        auto ingredients = get_cookie_ingredients(24);
        REQUIRE(ingredients[0] == Approx(0.75));
        REQUIRE(ingredients[1] == Approx(0.5));
        REQUIRE(ingredients[2] == Approx(1.375));
    }
}