#include "main.h"
/**
* _strcpy - a function that copies a string to a buffer
* @dest: the buffer that the string is copied to
* @src: pointer containing a string
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
