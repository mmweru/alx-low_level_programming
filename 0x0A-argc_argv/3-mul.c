#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point of the function
* @argc: the size of characters
* @argv: the array of characters
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int count;
	int mul;

	count = 1;
	mul = 1;
	if (argc > 2)
	{
		while (count < argc)
		{
			mul *= atoi(argv[count]);
			count++;
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
