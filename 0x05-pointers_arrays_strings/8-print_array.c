#include "main.h"
#include <stdio.h>
/**
* print_array -  function that prints n elements of an array
* @a: pointer to integer a
* @n: integers to be printed in a particular order
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
