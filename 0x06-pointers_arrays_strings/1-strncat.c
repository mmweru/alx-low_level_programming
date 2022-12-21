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
	int i, j;

	while (src[n] != '\0')
	{
		i++;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
