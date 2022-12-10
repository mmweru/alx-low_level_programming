#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of function
* uses putchar() to output lowercase alphabet
* Return: Always 0
*/
int main(void)
{
	char  alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
