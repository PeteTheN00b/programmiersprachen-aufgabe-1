#include <iostream>

double mile_to_kilometer(double mile)
{
	return mile * 1.609;
}

int main()
{
	double miles;
	std::cout << "Please Input the number of miles:" << std::endl;
	std::cin >> miles;
	std::cout << "That is " << mile_to_kilometer(miles) << " kilometers" << std::endl;
}