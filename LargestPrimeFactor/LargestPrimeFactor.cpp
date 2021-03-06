// LargestPrimeFactor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

void largest_prime_factor(long long int num)
{
	std::vector<int> primes; 
	long long int d = 2;
	while (num > 1)
	{
		while (num % d == 0)
		{
			primes.push_back(d);
			num /= d;
		}
		d = d + 1;
		if (d * d > num)
		{
			if (num > 1)
			{
				primes.push_back(num);
				break;
			}
		}
	}

	long long int lpf = *std::max_element(primes.begin(), primes.end());
	std::cout << "max factor is : " <<  lpf << std::endl;
	return ; 
}


int main()
{
	largest_prime_factor(600851475143);

    return 0;
}

