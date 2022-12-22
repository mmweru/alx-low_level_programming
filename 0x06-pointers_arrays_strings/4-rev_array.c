#include "main.h"
/**
* reverse_array - function to print the reverse order of an array
* @a: the pointer to the array
* @n: the size of the array
* Return: Nothing.
*/
void reverse_array(int *a, int n)
{
	int i, j;

	j = 0;
	n = n - 1;
	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}
