#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

bool divisible(int n, int div)
{
	return n % div == 0;
}

int gcd(int a, int b)
{
	if (a == 0 || b == 0) //These inputs would always be incorrect, therefore we will return -1 as an error if we ever get them, otherwise these would provide us with an infinite loop
	{
		std::cout << "Invalid Input 0 Detected, Returning -1";
		return -1;
	}

	a = a < 0 ? -a : a; //Convert a and b to their positive values if they are negative, if we didn't do this we'd have to make sure our initial gcd test was positive and the smaller value
	b = b < 0 ? -b : b; //Could technically use the cmath abs() function, I didn't want to

	int gcd = a < b ? a : b; //set n to equal a if it is smaller than b, otherwise b (pick the smaller of the two to start with, and work down from there)

	while (!(divisible(a, gcd) && divisible(b, gcd))) //decrement our gcd by 1 until it passes this test, this could technically be done with a for loop but I think it looks cleaner this way
		gcd--;

	return gcd;
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(9, 6) == 3);
	REQUIRE(gcd(3, 7) == 1);

	REQUIRE(gcd(0, 0) == -1);
	REQUIRE(gcd(1, -1) == 1);
	REQUIRE(gcd(53, -23) == 1);

	//The following tests should always fail, uncomment them one by one to show that the test check works properly
	//REQUIRE(gcd(0, 1) == 1);
	//REQUIRE(gcd(3, 2) == 2);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}