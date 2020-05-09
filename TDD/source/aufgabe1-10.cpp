#define CATCH_CONFIG_RUNNER
#include "catch2/catch.hpp"

int sum_multiples(int max)
{
	int sum = 0; //Initialize our sum with a value of 0

	for (int i = 1; i <= max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

TEST_CASE("describe_sum_multiples", "[checksum]")
{
	REQUIRE(sum_multiples(10) == 33); //Was checked manually +3 +5 +6 +9 +10 = 33
	REQUIRE(sum_multiples(65) == 998); //Wasn't checked manually, used failed test to find the generated value
	REQUIRE(sum_multiples(-5) == 0); //Any negative value should return 0
	REQUIRE(sum_multiples(0) == 0);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}