#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return: Nothing.
*/
void print_alphabet_x10(void)
{
	char alpha;
	int times = 0;

	while (times < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		times++;
	}
}

