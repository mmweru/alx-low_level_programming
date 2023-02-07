#include "main.h"
/**
* get_bit - returns the value of
* a bit at a given index
* @n: the number
* @index: inedx to be returned
* Return: the value of the index or
* an error if otherwise
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
