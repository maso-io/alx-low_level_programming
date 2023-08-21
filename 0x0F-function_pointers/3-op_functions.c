#include "3-calc.h"
/**
 * op_add - returns sum of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns quotient of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - returns modulus of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
