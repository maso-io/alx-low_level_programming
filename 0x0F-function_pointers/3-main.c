#include "3-calc.h"
#include <stdio.h>
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
	int i, res;
	int (*fp)(int, int);
	char msg[7] = {'E', 'r', 'r', 'o', 'r', '\n', '\0'};

	if (argc < 4)
	{
		while (i < 6)
		{
			_putchar(msg[i]);
			i++;
		}
		exit(98);
	}
	if (
			*argv[2] != '+' ||
			*argv[2] != '-' ||
			*argv[2] != '*' ||
			*argv[2] != '/' ||
			*argv[2] != '%'
	   )
	{
		int i;
		char msg[7] = {'E', 'r', 'r', 'o', 'r', '\n', '\0'};

		while (i < 6)
		{
			_putchar(msg[i]);
			i++;
		}
		exit(99);
	}
	fp = get_op_func(argv[2]);
	res = fp(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
