#define CATCH_CONFIG_RUNNER
#include "catch2/catch.hpp"

float fract(float f)
{
	f = f < 0 ? -f : f;

	f -= (long)f;

	return f;
}

TEST_CASE("fract", "[checkfract]")
{
	REQUIRE(fract(3.14) == Approx(0.14));
	REQUIRE(fract(0.17) == Approx(0.17));
	REQUIRE(fract(0) == Approx(0));
	REQUIRE(fract(-6.9) == Approx(0.9));
	REQUIRE(fract(42.69) == Approx(0.69)); //Noice
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}