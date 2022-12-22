#include "main.h"
/**
* cap_string - function that capitalizes words of a string
* @n: string to be capitalized.
* Return: the string.
*/
char *cap_string(char *n)
{
	int j = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + j) >= 97 && *(n + j) <= 122)
		*(n + j) = *(n + j) - 32;
	j++;
	while (*(n + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(n + j) == sep[i])
			{
				if ((*(n +  (j + 1)) >= 97) && (*(n + (j + 1)) <= 122))
					*(n + (j + 1)) = *(n + (j + 1)) - 32;
				break;
			}
		}
		j++;
	}
	return (n);
}
