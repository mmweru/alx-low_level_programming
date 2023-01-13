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
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
		count++;
	}
}
