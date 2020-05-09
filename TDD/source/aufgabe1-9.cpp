#define CATCH_CONFIG_RUNNER
#include "catch2/catch.hpp"

int checksum(int n)
{
	n = n < 0 ? -n : n; //Make n positive if it is negative

	int sum = 0; //Initialize our sum with a value of 0

	while (n > 0) //While our parameter n still has digits remaining, add the value of that digit to the sum, then remove the digit from the number
	{
		sum += n % 10; //Add last digit to the sum
		n /= 10; //Remove last digit from the sum
	}

	return sum;
}

TEST_CASE("describe_checksum", "[checksum]")
{
	REQUIRE(checksum(121530) == 12);
	REQUIRE(checksum(91) == 10);
	REQUIRE(checksum(-17) == 8);
	REQUIRE(checksum(0) == 0);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}