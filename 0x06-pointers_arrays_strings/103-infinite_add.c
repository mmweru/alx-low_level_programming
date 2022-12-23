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
	int  k1 = 0, k2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + k1) != '\0')
		k1++;
	while (*(n2 + k2) != '\0')
		k2++;
	if (k1 >= k2)
		bg = k1;
	else
		bg = k2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	k1--, k2--, size_r--;
	dr1 = *(n1 + k1) - 48, dr2 = *(n2 + k2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (k1 > 0)
			k1--, dr1 = *(n1 + k1) - 48;
		else
			dr1 = 0;
		if (k2 > 0)
			k2--, dr2 = *(n2 + k2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

