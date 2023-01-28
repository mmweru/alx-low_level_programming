#include "main.h"
/**
* create_array - function that creates
* an array of characters
* @size: the length of characters
* @c: the chracters to be printed
* Return: Always 0.
*/
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
