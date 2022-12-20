#include "main.h"
/**
* swap_int - function for swapping two integers
* @a: the first integer
* @b: the second integer
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
