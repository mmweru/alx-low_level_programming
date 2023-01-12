#include "main.h"
/**
* print_chessboard - outputs a cheesboard
* @a: 2D array
* Return: returns a chessboard.
*/
void print_chessboard(char (*a)[8])
{
	int c = 0, b;

	while (c < 8)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
		c++;
	}
}
