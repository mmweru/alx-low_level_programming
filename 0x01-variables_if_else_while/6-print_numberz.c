#include <stdio.h>
#include <stdlib.h>
/**
* main -Entry point of function
* outputs numbers less than 10
* Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
