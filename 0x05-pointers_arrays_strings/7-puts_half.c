#include "main.h"
/**
* puts_half - function to print the second half of the string
* @str: the string to be inputed
*/
void puts_half(char *str)
{
	int i = 0;
	int mid, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		mid = i / 2;
		for (mid = mid; mid <= i; mid++)
		{
			j = str[mid];
			_putchar(j);
		}
	}
	else
	{
		mid = (i + 1) / 2;
		for (mid = mid; mid <= i; mid++)
		{
			j = str[mid];
			_putchar(j);
		}
	}
	_putchar('\n');
}
