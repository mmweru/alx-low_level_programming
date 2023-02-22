#include "main.h"
/**
* main - entry point of a
* function
* @num:the integer input
* Return: 0 when success
*/
int main(int num){
	while (num != '\0')
	{
		if (num == 0)
		{
			_putchar("num is zero");
		}
		else if (num < 0)
		{
			_putchar("num is negative");
		}
		else
		{
			printf("num is positive");
		}
	}
	return (0);
}
