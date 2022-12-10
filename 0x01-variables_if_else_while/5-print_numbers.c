#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the function
* outputs numbers to the base of 10
* Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
