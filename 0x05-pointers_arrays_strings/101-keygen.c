#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the function
* outputs a randomly generated password
* Return: Always 0.
*/
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
