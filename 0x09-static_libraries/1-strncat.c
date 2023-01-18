#include "main.h"
/**
* _strncat - function that concatenates two strings
* @src: string to be concatenated
* @dest: the output to be given
* @n: the integer size of src
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
