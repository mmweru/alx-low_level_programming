#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - calls function
* to act on arrays of elements
* @array: name of the array
* @size: size of the array
* @action: function acting on array
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
