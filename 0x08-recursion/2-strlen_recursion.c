#include "main.h"
/**
* _strlen_recursion - outputs the
* length of a string
* @s: the string to be outputed
* Return: Nothing.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
