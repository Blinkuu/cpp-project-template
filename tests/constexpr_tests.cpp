#include <catch2/catch.hpp>
#include <mylib/core.hpp>

TEST_CASE("Factorials are computed with constexpr", "[factorial]")
{
  STATIC_REQUIRE(mylib::factorial(1) == 1);
  STATIC_REQUIRE(mylib::factorial(2) == 2);
  STATIC_REQUIRE(mylib::factorial(3) == 6);
  STATIC_REQUIRE(mylib::factorial(10) == 3628800);
}
