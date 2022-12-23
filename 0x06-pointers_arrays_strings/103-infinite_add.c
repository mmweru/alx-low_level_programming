#include "main.h"
/**
* infinite_add - function that adds two numbers
* @n1: the first number to be added
* @n2: the second number to be added
* @r: the pointer to store the result
* @size_r: the size of the buffer
* Return: the result of the summation.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k1, k2;
	int a1[size_r];
	int a2[size_r];

	for (i =0; i < size_r; i++)
	{
		a1[i] = n1[i];
		a2[i] = n2[i];
	}
	k1 = 0;
	k2 = 0;
	for (j = 0; j < size_r; j++, i++)
	{
		k1 = 10 * k1 + a1[i];
		k2 = 10 * k2 + a2[i];
	}
	*r = k1 + k2;
	return (r);
}
