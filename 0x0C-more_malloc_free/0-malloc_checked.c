#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that
* allocates memory
* @b: int that holds memory size
* Return: 0 program was success
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
