#include "main.h"
/*
* _isupper- Entry point of the function.
* checks whether the character is in uppercase
* @c: character to be checked
* Return: returns 1 if uppercase and 0 if otherwise.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
