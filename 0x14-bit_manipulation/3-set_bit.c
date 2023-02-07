#include "main.h"
/**
* set_bit - converts the value
* of an index at a particular position
* @n: integer to be set
* @index: index of the integer
* Return: 1 if worked -1 error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
