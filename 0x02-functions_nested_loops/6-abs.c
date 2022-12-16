#include "main.h"
/**
* _abs - outputs the absolute value of an integer
* @i: integer to be checked
* Return: the absolute value of the integer.
*/
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
