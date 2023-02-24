#include <iostream>
#include <cmath>

//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3 - digit numbers.

bool isPalindrome(unsigned long int n)
{
	unsigned long int reverse = 0;
	int remainder = 0;
	unsigned long int m = n;

	while (n != 0)
	{	
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}

	if (reverse == m)
		return true;
	return false;
}


int main()
{
	unsigned int largestP = 0;
	unsigned int product = 0;

	for (int i = 999; i != 100; --i)
		for (int j = 999; j != 100; --j)
		{
			if (isPalindrome (i * j))
			{
				product = i * j;
				if (largestP < product)
					largestP = product;
			}
		}


	std::cout << "The largest palindrome made from the product of two 3 - digit numbers is : " << largestP << std::endl;


	return 0;
}