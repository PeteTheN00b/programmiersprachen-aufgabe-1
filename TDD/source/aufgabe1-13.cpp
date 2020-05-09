#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES //seemed to be necessary to use the math PI constant
#include "catch2/catch.hpp"
#include <cmath>

int factorial(int n)
{
	if (n < 0) //No possible factorials
		return -1;

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

TEST_CASE("factorial", "[fact]")
{
	REQUIRE(factorial(3) == 6); //Manual
	REQUIRE(factorial(5) == 120); //Manual
	REQUIRE(factorial(13) == 1932053504); //Found using fail test == 1
	REQUIRE(factorial(0) == 1); //Manual exception
	REQUIRE(factorial(-69) == -1); //Manual exception
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}