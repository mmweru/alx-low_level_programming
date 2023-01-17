#include "main.h"
/**
* _pow_recursion - outputs the power
* @x: the number
* @y: the power
* Return: 0 when succes -1 error.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	return (0);
}
