#include "main.h"
#define NULL 0
/**
* _strpbrk - function that checks for bytes
* @s: the string we first look for the characters
* @accept: string we use to compare
* Return: a pointer to the stringif any and null if not.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
                	{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
