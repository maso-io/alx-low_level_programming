#include "3-calc.h"
/**
 * get_of_func - selects the correct function to perfom the operation asked
 * @s: string with the operation to perform
 *
 * Return: function that peforms the operation asked for
 */

int (*get_of_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
