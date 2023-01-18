#include "main.h"
#define NULL 0
/**
* _strpbrk - return pointer to bytes
* @s: the string to search
* @accept: string we use to compare
* Return: a pointer to the string
* if any and null if not.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
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
