#include "main.h"
#define NULL 0
/**
* char *_strchr - function that checks a character
* @s: the string to be checked
* @c: the character to be found
* Return: a pointer to the first occurence.
*/
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0' && s[a] != c)
		a++;
	if (s[a] == c)
		return (&s[a]);
	else
		return (NULL);
}
