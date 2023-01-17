#include "main.h"
/**
*  helper - finds the squreroot
* @a: the number
* @b: what to test
* Return: 0 success -1 error.
*/
int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}
/**
* _sqrt_recursion - outputs
* the squareroot
* @n: the number to test
* Return: 0 success -1 error.
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (helper(n, 1));
}
