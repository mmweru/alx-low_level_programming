#include "main.h"
/**
* get_endianness - checks if a machine is
* a little or big endian
* Return: 0 for little 1 for big endian
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
