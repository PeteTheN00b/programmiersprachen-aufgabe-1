#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES //seemed to be necessary to use the math PI constant
#include "catch2/catch.hpp"
#include <cmath>

class Cylinder
{
public:
	Cylinder(float height, float radius);
	float getVolume();

private:
	float height_;
	float radius_;
};

Cylinder::Cylinder(float height, float radius) :
	height_{height},
	radius_{radius} {}

float Cylinder::getVolume()
{
	return this->height_ * this->radius_ * this->radius_ * M_PI;
}

TEST_CASE("checkCylinderVolume", "[CylinderVolume]")
{
	Cylinder c1{ 10.f, 3.f }; //Manually tested
	Cylinder c2{ 3.f, 6.f }; //Manually tested
	Cylinder c3{ 420.f, 69.f }; //Use failed test to find value
	REQUIRE(c1.getVolume() == Approx(90 * M_PI)); //10 * 3 * 3 = 90
	REQUIRE(c2.getVolume() == Approx(108 * M_PI)); //3 * 6 * 6 = 108
	REQUIRE(c3.getVolume() == Approx(1999620 * M_PI)); //Took returned value from failed test and divided by PI using google calculator
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}