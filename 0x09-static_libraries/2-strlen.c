#include "main.h"
/**
* _strlen - a function that returns the length of a string
* @s: the string whose length is returned
* Return: Always 0.
*/
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
