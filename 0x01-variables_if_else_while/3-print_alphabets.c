#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of function
* alphabets in lower then uppercase
* Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
