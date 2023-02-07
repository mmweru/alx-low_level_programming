#include "main.h"
/**
* clear_bit - sets the value of a
* bit to 0
* @n: the integer to be set
* @index: index of the integer
* Return: 1 success -1 fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
