#include <stdio.h>
/**
* main - Entry point of the function
* outputs the summation of the multiples of 3 and 5
* Return: Nothing.
*/
int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
