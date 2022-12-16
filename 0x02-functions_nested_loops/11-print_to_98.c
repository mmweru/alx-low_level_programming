#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints numbers from n to 98
* @n: the start off of the printing
* Return: Nothing it does not return anything.
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
