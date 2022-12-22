#include "main.h"
/**
* rot13 - function that encodes a string using ROT13
* @n: string to be encoded
* Return: the encoded string.
*/
char *rot13(char *n)
{
	int i = 0, j;
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(n + i) == s[j])
			{
				*(n + i) = rot[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
