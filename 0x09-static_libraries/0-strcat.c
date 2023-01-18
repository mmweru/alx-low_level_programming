#include "main.h"
/**
* _strcat - function that concatenates two strings
* @src: the string to be appended
* @dest: the string containing the NULL value
* Return: it returns a pointer to the string dest.
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int j = 0;

	while (dest[index++])
		j++;
	for (index = 0; src[index]; index++)
		dest[j++] = src[index];
	return (dest);
}
