#include "main.h"
/**
* palind - outputs a palindrome
* @a: character to be checked
* @l: the size of the integer
* Return: Palindrome.
*/
int palind(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind(a + 1, l + 1));
}
/**
* palind1 - ouputs a palindrome
* @a: character to be checked
* @l: the size of integer
* Return: 1 success -1
* failure.
*/
int palind1(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind1(a + 1, l - 2));
}
/**
* is_palindrome - checks for palindrome
* @s: string to be checked
* Return: 1 success 0 error.
*/
int is_palindrome(char *s)
{
	int l;

	l = palind(s, 0);
	return (palind1(s, l));
}
