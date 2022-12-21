#include "main.h"
#include <stdio.h>
/**
* _strcat - function that concatenates two strings
* @src: the string to be appended
* @dest: the string containing the NULL value
* Return: it returns a pointer to the string dest.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
