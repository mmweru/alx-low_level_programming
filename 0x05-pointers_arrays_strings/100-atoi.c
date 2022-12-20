#include "main.h"
/**
* _atoi - function to convert strings to integers
* @s: the string input
* Return: Always 0.
*/
int _atoi(char *s)
{
	int signs = 1;
	unsigned int sum = 0;
	int final = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			signs += -1;
		else if (*s >= '0' &&  s<= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}
	if (signs == -1)
		final = -sum;
	else
		final = sum;
	return (final);
}
