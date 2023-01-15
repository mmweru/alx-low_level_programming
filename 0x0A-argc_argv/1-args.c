#include "main.h"
#include <stdio.h>
/**
* main - Entry point of the function
* @argc: the number of characters
* @argv: the array of pointers
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
