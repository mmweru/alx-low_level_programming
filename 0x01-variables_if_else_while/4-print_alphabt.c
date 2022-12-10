# include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the function
* prints alphabets but skips q and e
* Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
