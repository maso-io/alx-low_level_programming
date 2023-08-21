#include "3-calc.h"
/**
 * get_op_func - ptr to a func that takes 2 args of type int and returns an int
 * @s: operand passed by user
 *
 * Return: pointer to function that perfoms operation and return result
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 6; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (NULL);
}
