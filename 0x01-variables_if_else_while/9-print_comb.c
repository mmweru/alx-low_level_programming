#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the function
* outputs all possible combinations of 8 digit code
* Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
