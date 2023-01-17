#include "main.h"
/**
* factorial - outputs the factorial
* @n: the integer to be ouputed
* Return: 0 when success 1 error
*/
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
