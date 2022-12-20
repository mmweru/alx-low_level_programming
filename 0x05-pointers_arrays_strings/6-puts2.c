#include "main.h"
/**
* puts2 - prints the characters of a string
* @str: the string whose charcters are being printed
*/
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j < i; j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
