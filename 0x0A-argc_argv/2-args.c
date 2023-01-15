#include "main.h"
#include <stdio.h>

/**
* main - Entry point of the function
* @argc: the number of characters
* @argv: the array of the strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
