#include <stdio.h>
<<<<<<< HEAD

#include "main.h"


/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

    unsigned int n;


    n = binary_to_uint("1");

    printf("%u\n", n);

    n = binary_to_uint("101");

    printf("%u\n", n);

    n = binary_to_uint("1e01");

    printf("%u\n", n);

    n = binary_to_uint("1100010");

    printf("%u\n", n);

    n = binary_to_uint("0000000000000000000110010010");

    printf("%u\n", n);

    return (0);

=======
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
>>>>>>> 64caa32c24305d2ab0479c44a6e35a5d7ad3e370
}
