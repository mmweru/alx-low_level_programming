#include "main.h"
/**
* print_sign - checks whether a sign is 0, <, >
* outputs 1 and 0 respectively
* @n: integer to be tested
* Return: 1, 0 and -1 respectively.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
