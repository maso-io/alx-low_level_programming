#include "3-calc.h"
/**
 * op_add - adds two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - finds the quotient two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds the modulus two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: the modulus or two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
