#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - outputs the name
* @name: name to be outputed
* @f: pointer to name
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
