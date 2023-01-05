#include "main.h"
/*
* _puts_recursion- function that outputs a string
* @s: the string to be outputed
* Return: nothing.
*/
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
