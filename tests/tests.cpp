#include <catch2/catch.hpp>
#include <mylib/core.hpp>

TEST_CASE("Simple test is computed", "[simple_test]")
{
  REQUIRE(mylib::fun() == 0);
}
