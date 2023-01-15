#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - Entry point of the function
* @argc: the number of characters
* @argv: the array of characters
* Return: 0 when sucess
* 1 when error.
*/
int main(int argc, char *argv[])
{
	int count, sum, a, b;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			count = strlen(ptr);

			for (b = 0; b < count; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
