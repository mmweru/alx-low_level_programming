#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - adds two numbers
* @a: the first integer
* @b: the second integer
* Return: the sum.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtracts two numbers
* @a: the first integer
* @b: the second integer
* Return: the subtraction.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplies two numbers
* @a: the first integer
* @b: the second integer
* Return: the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divides two numbers
* @a: the first number
* @b: the second number
* Return: the division.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - finds the modulus
* @a: the first integer
* @b: the second integer
* Return: the modulus.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
