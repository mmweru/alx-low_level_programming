#include "main.h"
/**
* char *_memcpy - a function that copies n bytes from memory area src to memory area dest
* @n: the size of the memory in bytes
* @src: the first memory area
* @dest: the second memory area
* Return: a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = n;

	if (n > 0)
	{
		int i;

		for (i = 0; i < c; i++)
			dest[i] = src[i];
	}
	return (dest);
}
