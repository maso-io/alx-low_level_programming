#include "3-calc.h"
/**
 * main - program to generate a calculator
 * @argc: argument count
 * @argv: argumet vector
 *
 * Return: result of operation
 */

int main(int argc, char *argv[])
{
	int res;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
			*argv[2] != '+' ||
			*argv[2] != '-' ||
			*argv[2] != '%' ||
			*argv[2] != '/' ||
			*argv[2] != '*'
		)
	{
		printf("Error\n");
		exit(99);
	}
	fp = get_op_func(argv[2]);
	res = fp(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
