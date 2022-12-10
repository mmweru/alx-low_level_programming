#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the function
* outputs alphabets in reverse
* Return: Always 0.
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
