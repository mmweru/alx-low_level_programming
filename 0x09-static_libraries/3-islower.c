#include "main.h"
/**
* _islower - outputs whether the input is lower
* @c: character to be tested
* Return: 1 when lower 0 when not lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
