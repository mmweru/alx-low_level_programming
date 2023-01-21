#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: to display the output
* @f: pointer to function
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
