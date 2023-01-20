#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - outputs the
* name
* @name: name to be outputed
* @f: pointer to name
* Return: nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
