#include "main.h"
/**
* print_square - outputs a square
* @size: the size of the square
* Return: Nothing.
*/
void print_square(int size)
{
	int i, j;

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}
	else
		_putchar('\n');
}
