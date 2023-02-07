<<<<<<< HEAD
/**
* binary_to_uint - converts binary
* to unsigned int
* @b: number to be converted to int
* Return: converyed number
=======
#include "main.h"
/**
* binary_to_uint - converts binary to
* unsigned int
* @b: the number to be converted to
* int
* Return: converted number
>>>>>>> 64caa32c24305d2ab0479c44a6e35a5d7ad3e370
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint, place;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		;
	i--;
	for (place = 1, uint = 0; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
<<<<<<< HEAD
=======


>>>>>>> 64caa32c24305d2ab0479c44a6e35a5d7ad3e370
