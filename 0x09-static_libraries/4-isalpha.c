#include "main.h"
/**
* _isalpha - checks whether a letter is lower or uppercase
* @c: character to be tested
* Return: 1 when it is lower or upper or 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
