#include "main.h"
/**
* _memset - function that  fills the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: pointer to memory area
* @n: the size of memory in bytes
* @b: the constant byte
* Return: pointer s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
