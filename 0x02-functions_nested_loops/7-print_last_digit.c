#include "main.h"
/**
* print_last_digit - outputs the last digit
* @a: the digit to be output
* Return: the last digit.
*/
int print_last_digit(int a)
{
	a %= 10;

	if (a < 0)
	{
		a *= -1;
	}
	_putchar('0' + a);
	return (a);
}
