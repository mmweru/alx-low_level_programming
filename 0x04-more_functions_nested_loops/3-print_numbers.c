#include "main.h"
/**
* print_numbers - outputs numbers
* Return: Nothing,
*/
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
