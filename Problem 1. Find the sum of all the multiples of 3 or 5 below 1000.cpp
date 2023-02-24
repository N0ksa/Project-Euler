#include <iostream>
#include <cmath>

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

int main()
{

	unsigned int a = 3;
	unsigned int b = 5;
	unsigned int sum = 0;

	for (int i = 1; i < 1000; ++i)
	{
		if (i % a == 0 || i % b == 0)
			sum += i;
	}

	std::cout << "Sum is: " << sum << std::endl;



	return 0;
}