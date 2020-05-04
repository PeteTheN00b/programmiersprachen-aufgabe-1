#include <iostream>

bool divisible(int n)
{
	//Test for all divisors from 2 to 20 (1 is unnecessary as all numbers are divisble by it)
	for (int div = 2; div <= 20; div++)
	{
		//If it is indivisible by any of them
		if (n % div != 0)
		{
			return false;
		}
	}

	//If none of the tests returned positive, 
	return true;
}

int main()
{
	//Starting with 20 because numbers below 20 cannot be divisible by all numbers between 2 and 20
	int n = 20;

	//Whenever our number cannot be divided, increment it by 1 and try again
	while (!divisible(n))
	{
		n++;
	}

	//When this while loop has ended we found our correct number n
	std::cout << "Smallest Possible Number Is: " << n << std::endl;
}