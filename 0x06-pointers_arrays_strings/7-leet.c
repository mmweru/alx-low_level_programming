#include "main.h"
/**
* leet - function that encodes a string
* @n: string to be encoded
* Return: the value of the encoded string.
*/
char *leet(char *n)
{
	int i = 0, j;
	char val[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (n[i] == val[j] || n[i] - 32 == val[j])
				n[i] = j + '0';
		}
		i++;
	}
return (n);
}
