#include "main.h"
/**
* prime - to test for prime
* @a: the integer to be tested
* Return: 0 success 1 error.
*/
int prime(int a)
{
	while (a > 1)
	{
		if ((a != 2) || (a != 3) || (a != 5) || (a != 7))
		{
			if ((a % 2 == 0) || (a % 3 == 0) || (a % 5 == 0) || (a % 7 == 0))
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		return (1);
	}
	return (0);
}
/**
* is_prime_number - outputs prime
* @n: number input
* Return: 0 success 1 failure.
*/
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	return (prime(n));
}
