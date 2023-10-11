#include "3-calc.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * main - run calculator program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on wrong number of inputs, 99 on operator error,
 * 100 on division by 0
 */
int main(int argc, char **argv)
{
	int res;
	int (*fp)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
			(
			*argv[2] == '+' ||
			*argv[2] == '-' ||
			*argv[2] == '*' ||
			*argv[2] == '/' ||
			*argv[2] == '%'
			) &&
			(
			_strlen(argv[2]) == 1
			)
	   )
	{
		fp = get_op_func(argv[2]);
		res = fp(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);

	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
