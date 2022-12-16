#include "main.h"
/**
* main - Entry point of the function
* prints putchar folllowed by a newline
* Return: Always 0.
*/
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (0);
}
