#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - execute on
* each parameter
* @array: array which function acts on
* @size: size of function
* @action: function to act on array
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
