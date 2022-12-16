#include "main.h"
/**
* print_alphabet - outputs alphabets
* outputs the alphabets in lowercase
* Return: Nothing.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
