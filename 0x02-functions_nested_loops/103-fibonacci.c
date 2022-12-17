#include <stdio.h>
/**
* main - Entry point of the function
* outputs even digits fibonacci digits under 4 million
* Return: Always 0.
*/
int main(void)
{
	unsigned long count, i, j, k, sum;

	i = sum = 0;
	j = i;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);

	return (0);
}
