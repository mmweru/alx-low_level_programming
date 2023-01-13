#include <stdio.h>
/**
* main - Entry point of the function
* Return: Always 0.
*/
int main(void)
{
	unsigned long int i = 3, a = 612852475143;

	for(; i < 12057; i += 2)
	{
		while (a % i == 0 && a != i)
			a /= i;
	}
	printf("%lu\n", a);
	return (0);
}
