#include "main.h"
/**
* _print_rev_recursion - outputs
* the reverse string
* @s: string to be reversed
* Return: Nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
