#define CATCH_CONFIG_RUNNER
#include "catch2/catch.hpp"

bool is_prime(int n)
{
	for (int i = 2; i < n / 2; i++)
		if (n % i == 0)
			return false;

	return true;
}

TEST_CASE("factorial", "[fact]")
{
	REQUIRE(is_prime(5));
	REQUIRE(!is_prime(6)); //3 * 2
	REQUIRE(is_prime(17));
	REQUIRE(!is_prime(51)); //3 * 17
	REQUIRE(!is_prime(19970869)); //Supposedly false, found out using failed test
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}