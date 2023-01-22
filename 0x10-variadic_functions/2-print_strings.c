#include "variadic_functions.h"
/**
* print_strings - prints a string
* @separator: string to be printed
* between strings
* @n: number of strings
* Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;
	char *str;

	va_start(np, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(np, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(np);
}
