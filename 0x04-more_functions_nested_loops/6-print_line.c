#include "main.h"
/**
* print_line - outputs a line
* @n: the number of times the line
* will be printed
* Return: Nothing.
*/
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
