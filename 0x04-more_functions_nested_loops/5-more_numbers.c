#include "main.h"
/**
* more_numbers - outputs numbers from
* 0 to 14 recursively
* Return: Nothing.
*/
void more_numbers(void)
{
	int a;
	int count = 0;

	while (count < 10)
	{
		a = 0;
		while (a <= 14)
		{
			_putchar(a + '0');
			a++;
		}
		_putchar('\n');
		count++;
	}
}
