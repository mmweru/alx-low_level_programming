#include "main.h"
/**
* unsigned int _strspn - function that returns the number of bytes.
* @s: the internal segment
* @accept: bytes to be compared with
* Return: the number of bytes in the internal segment.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return k;
		}
		i++;
	}
	return (k);
}
