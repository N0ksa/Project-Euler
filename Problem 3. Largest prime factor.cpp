#include <iostream>
#include <cmath>

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?



unsigned long int getMaxPrime(unsigned long long int n)
{
	unsigned long maxPrime;
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (unsigned long int i = 3; i < sqrt(n); i += 2)
	{
		if (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}
	if (n > 2)
		maxPrime = n;
	return maxPrime;
}

int main()
{
	unsigned long long int n = 600851475143;
	std::cout << "The largest prime factor of the number 600851475143 is : " << getMaxPrime(n);
	return 0;
}