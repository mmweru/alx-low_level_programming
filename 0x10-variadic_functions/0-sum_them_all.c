#include "variadic_functions.h"
/**
* sum_them_all - outputs the sum
* @n: the number of arguments
* Return: summation.
*/
int sum_them_all(const unsigned int n, ...)
{
		va_list ap;
		unsigned int i;
		unsigned int sum = 0;

		if (n == 0)
			return (0);

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, unsigned int);
		}

		va_end(ap);

		return (sum);
}

