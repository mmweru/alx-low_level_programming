#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the function
* outputs hexadecimal digits
* Return: Always 0.
*/
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
