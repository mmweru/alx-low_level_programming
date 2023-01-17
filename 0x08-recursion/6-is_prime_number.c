#include "main.h"
/**
* prime - to test for prime
* @a: the integer to be tested
* Return: 0 success 1 error.
*/
int prime(int a)
{
	int x[4] = {2, 3, 5, 7};
	int i;

	while (a > 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (a % x[i] != 0)
			{
				return (1);
			}
			else if (a % x[i] == 0)
			{
				return (0);
			}
			return (0);
		}
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
