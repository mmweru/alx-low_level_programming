#include "variadic_functions.h"
/**
* print_numbers - outputs numbers
* @separator: string to be printed
* @n: number of integers
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
