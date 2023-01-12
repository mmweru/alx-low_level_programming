#include "main.h"
#include <stdio.h>
/**
* print_diagsums - outputs sum of diagonals
* @a: the array to get sum
* @size: the size of the array
*/
void print_diagsums(int *a, int size)
{
	int x, y, z;

	x = 0;
	y = 0;
	z = 0;
	while (x < size)
	{
		y += a[x * (size + 1)];
		z += a[(x + 1) * (size - 1)];
		x++;
	}
	printf("%d, ", y);
	printf("%d", z);
	printf("\n");
}
